/**
 * @file lv_list.c
 * 
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_conf.h"
#if USE_LV_LIST != 0

#include "lv_list.h"
#include "lv_rect.h"
#include "misc/math/math_base.h"

/*********************
 *      DEFINES
 *********************/
#define LV_LIST_LAYOUT_DEF	LV_RECT_LAYOUT_COL_M

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
#if 0
static bool lv_list_design(lv_obj_t * list, const area_t * mask, lv_design_mode_t mode);
#endif
static void lv_lists_init(void);

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_lists_t lv_lists_def;
static lv_lists_t lv_lists_transp;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*----------------- 
 * Create function
 *-----------------*/

/**
 * Create a list objects
 * @param par pointer to an object, it will be the parent of the new list
 * @param copy pointer to a list object, if not NULL then the new object will be copied from it
 * @return pointer to the created list
 */
lv_obj_t * lv_list_create(lv_obj_t * par, lv_obj_t * copy)
{
    /*Create the ancestor basic object*/
    lv_obj_t * new_list = lv_page_create(par, copy);
    dm_assert(new_list);
    lv_list_ext_t * ext = lv_obj_alloc_ext(new_list, sizeof(lv_list_ext_t));
    dm_assert(ext);

	lv_obj_set_signal_f(new_list, lv_list_signal);

    /*Init the new list object*/
    if(copy == NULL) {
    	lv_obj_set_size_us(new_list, 120, 150);
		lv_obj_set_style(new_list, lv_lists_get(LV_LISTS_DEF, NULL));
		lv_rect_set_layout(LV_EA(new_list, lv_list_ext_t)->page_ext.scrl, LV_LIST_LAYOUT_DEF);
    } else {
        /*Refresh the style with new signal function*/
        lv_obj_refr_style(new_list);
    }
    
    return new_list;
}

/**
 * Signal function of the list
 * @param list pointer to a list object
 * @param sign a signal type from lv_signal_t enum
 * @param param pointer to a signal specific variable
 */
bool lv_list_signal(lv_obj_t * list, lv_signal_t sign, void * param)
{
    bool valid;

    /* Include the ancient signal function */
    valid = lv_page_signal(list, sign, param);

    /* The object can be deleted so check its validity and then
     * make the object specific signal handling */
    if(valid != false) {
    	switch(sign) {
    		default:
    			break;
    	}
    }
    
    return valid;
}

/**
 * Add a list element to the list
 * @param list pointer to list object
 * @param img_fn file name of an image before the text (NULL if unused)
 * @param txt text of the list element (NULL if unused)
 * @param rel_action pointer to release action function (like with lv_btn)
 * @return pointer to the new list element which can be customized (a button)
 */
lv_obj_t * lv_list_add(lv_obj_t * list, const char * img_fn, const char * txt, lv_action_t rel_action)
{
	lv_lists_t * lists = lv_obj_get_style(list);

	/*Create a list element with the image an the text*/
	lv_obj_t * liste;
	liste = lv_btn_create(list, NULL);
	lv_obj_set_style(liste, &lists->liste_btn);
	lv_btn_set_rel_action(liste, rel_action);
	lv_page_glue_obj(liste, true);
	lv_rect_set_layout(liste, LV_RECT_LAYOUT_ROW_M);
	lv_rect_set_fit(liste, false, true);

	if(img_fn != NULL && img_fn[0] != '\0') {
		lv_obj_t * img = lv_img_create(liste, NULL);
		lv_img_set_file(img, img_fn);
		lv_obj_set_style(img, &lists->liste_img);
		lv_obj_set_click(img, false);
	}

	if(txt != NULL) {
		lv_obj_t * label = lv_label_create(liste, NULL);
		lv_label_set_text(label, txt);
		lv_obj_set_style(label,&lists->liste_label);
		lv_obj_set_click(label, false);
	}

	lv_lists_t * style = lv_obj_get_style(list);

	/*Make the size adjustment*/

    cord_t w = lv_obj_get_width(list);
    cord_t hpad_tot = lists->page.bg.hpad + lists->page.scrl.hpad;
    w -= hpad_tot * 2;

    /*Make place for the scrollbar if hpad_tot is too small*/
    if(style->width_sb != 0) {
        if(hpad_tot < lists->page.sb_width) w -= lists->page.sb_width - hpad_tot;
    }
    lv_obj_set_width(liste, w);

	return liste;
}

/**
 * Move the list elements up by one
 * @param list pointer a to list object
 */
void lv_list_up(lv_obj_t * list)
{
	/*Search the first list element which 'y' coordinate is below the parent
	 * and position the list to show this element on the bottom*/
	lv_obj_t * h = lv_obj_get_parent(list);
	lv_obj_t * e;
	lv_obj_t * e_prev = NULL;
	e = lv_obj_get_child(list, NULL);
	while(e != NULL) {
		if(e->cords.y2 <= h->cords.y2) {
			if(e_prev != NULL)
			lv_obj_set_y(list, lv_obj_get_height(h) -
					             (lv_obj_get_y(e_prev) + lv_obj_get_height(e_prev)));
			break;
		}
		e_prev = e;
		e = lv_obj_get_child(list, e);
	}
}

/**
 * Move the list elements down by one
 * @param list pointer to a list object
 */
void lv_list_down(lv_obj_t * list)
{
	/*Search the first list element which 'y' coordinate is above the parent
	 * and position the list to show this element on the top*/
	lv_obj_t * h = lv_obj_get_parent(list);
	lv_obj_t * e;
	e = lv_obj_get_child(list, NULL);
	while(e != NULL) {
		if(e->cords.y1 < h->cords.y1) {
			lv_obj_set_y(list, -lv_obj_get_y(e));
			break;
		}
		e = lv_obj_get_child(list, e);
	}
}


/*=====================
 * Setter functions 
 *====================*/


/*=====================
 * Getter functions 
 *====================*/

/**
 * Get the text of a list element
 * @param liste pointer to list element
 * @return pointer to the text
 */
const char * lv_list_element_get_txt(lv_obj_t * liste)
{
    /*The last child is the label*/
    lv_obj_t * label = lv_obj_get_child(liste, NULL);
    return lv_label_get_text(label);
}

/**
 * Return with a pointer to a built-in style and/or copy it to a variable
 * @param style a style name from lv_lists_builtin_t enum
 * @param copy_p copy the style to this variable. (NULL if unused)
 * @return pointer to an lv_lists_t style
 */
lv_lists_t * lv_lists_get(lv_lists_builtin_t style, lv_lists_t * list)
{
	static bool style_inited = false;

	/*Make the style initialization if it is not done yet*/
	if(style_inited == false) {
		lv_lists_init();
		style_inited = true;
	}

	lv_lists_t  *style_p;

	switch(style) {
        case LV_LISTS_DEF:
            style_p = &lv_lists_def;
            break;
		case LV_LISTS_TRANSP:
			style_p = &lv_lists_transp;
			break;
		default:
			style_p = &lv_lists_def;
	}

	if(list != NULL) memcpy(list, style_p, sizeof(lv_lists_t));

	return style_p;
}


/**********************
 *   STATIC FUNCTIONS
 **********************/

#if 0 /*A new design function is not necessary*/
/**
 * Handle the drawing related tasks of the lists
 * @param list pointer to an object
 * @param mask the object will be drawn only in this area
 * @param mode LV_DESIGN_COVER_CHK: only check if the object fully covers the 'mask_p' area
 *                                  (return 'true' if yes)
 *             LV_DESIGN_DRAW: draw the object (always return 'true')
 *             LV_DESIGN_DRAW_POST: drawing after every children are drawn
 * @param return true/false, depends on 'mode'
 */
static bool lv_list_design(lv_obj_t * list, const area_t * mask, lv_design_mode_t mode)
{
    if(mode == LV_DESIGN_COVER_CHK) {
    	/*Return false if the object is not covers the mask_p area*/
    	return false;
    }

    /*Draw the object*/

    return true;
}
#endif

/**
 * Initialize the list styles
 */
static void lv_lists_init(void)
{
    /*Default style*/
    lv_pages_get(LV_PAGES_MENU, &lv_lists_def.page);

    lv_rects_get(LV_RECTS_TRANSP, &lv_lists_def.liste_btn.state_style[LV_BTN_STATE_REL]);
    lv_rects_get(LV_RECTS_PLAIN, &lv_lists_def.liste_btn.state_style[LV_BTN_STATE_PR]);
    lv_rects_get(LV_RECTS_TRANSP, &lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TREL]);
    lv_rects_get(LV_RECTS_PLAIN, &lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TPR]);
    lv_rects_get(LV_RECTS_PLAIN, &lv_lists_def.liste_btn.state_style[LV_BTN_STATE_INA]);
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_REL].hpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_REL].vpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_REL].opad = LV_DPI / 6;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_PR].hpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_PR].vpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_PR].opad = LV_DPI / 6;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_PR].radius = 0;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TREL].hpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TREL].vpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TREL].opad = LV_DPI / 6;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TPR].hpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TPR].vpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TPR].opad = LV_DPI / 6;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_TPR].radius = 0;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_INA].hpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_INA].vpad = LV_DPI / 4;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_INA].opad = LV_DPI / 6;
    lv_lists_def.liste_btn.state_style[LV_BTN_STATE_INA].radius = 0;
    lv_labels_get(LV_LABELS_BTN, &lv_lists_def.liste_label); /*List element label style*/
    lv_imgs_get(LV_IMGS_DEF, &lv_lists_def.liste_img); /*List element image style*/

    memcpy(&lv_lists_transp, &lv_lists_def, sizeof(lv_lists_t));
    lv_pages_get(LV_PAGES_TRANSP, &lv_lists_transp.page);
}
#endif
