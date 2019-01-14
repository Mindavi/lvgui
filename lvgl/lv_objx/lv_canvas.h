/**
 * @file lv_canvas.h
 *
 */

#ifndef LV_CANVAS_H
#define LV_CANVAS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_conf.h"
#else
#include "../../lv_conf.h"
#endif

#if USE_LV_CANVAS != 0

#include "../lv_core/lv_obj.h"
#include "../lv_objx/lv_img.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
/*Data of canvas*/
typedef struct {
    lv_img_ext_t img; /*Ext. of ancestor*/
    /*New data for this type */
    lv_img_dsc_t dsc;
} lv_canvas_ext_t;


/*Styles*/
enum {
    LV_CANVAS_STYLE_MAIN,
};
typedef uint8_t lv_canvas_style_t;


/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a canvas objects
 * @param par pointer to an object, it will be the parent of the new canvas
 * @param copy pointer to a canvas object, if not NULL then the new object will be copied from it
 * @return pointer to the created canvas
 */
lv_obj_t * lv_canvas_create(lv_obj_t * par, const lv_obj_t * copy);

/*======================
 * Add/remove functions
 *=====================*/

/**
 * Set the color of a pixel on the canvas
 * @param canvas
 * @param x x coordiante of the point to set
 * @param y x coordiante of the point to set
 * @param c color of the point
 */
void lv_canvas_set_px(lv_obj_t * canvas, lv_coord_t x, lv_coord_t y, lv_color_t c);

/*=====================
 * Setter functions
 *====================*/

/**
 * Set a buffer for the canvas.
 * @param buf a buffer where the contant of the canvas will be.
 * The required size is (lv_img_color_format_get_px_size(cf) * w * h) / 8)
 * It can be allocated with `lv_mem_alloc()` or
 * it can be statically allocated array (e.g. static lv_color_t buf[100*50]) or
 * it can be an address in RAM or external SRAM
 * @param canvas pointer to a canvas obejct
 * @param w width of the canvas
 * @param h hight of the canvas
 * @param cf color format. The following formats are supported:
 * LV_IMG_CF_TRUE_COLOR,  LV_IMG_CF_TRUE_COLOR_ALPHA, LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED
 *
 */
void lv_canvas_set_buffer(lv_obj_t * canvas, void * buf, lv_coord_t w, lv_coord_t h, lv_img_cf_t cf);

/**
 * Set a style of a canvas.
 * @param canvas pointer to canvas object
 * @param type which style should be set
 * @param style pointer to a style
 */
void lv_canvas_set_style(lv_obj_t * canvas, lv_canvas_style_t type, lv_style_t *style);



/*=====================
 * Getter functions
 *====================*/

/**
 * Get style of a canvas.
 * @param canvas pointer to canvas object
 * @param type which style should be get
 * @return style pointer to the style
 */
lv_style_t * lv_canvas_get_style(const lv_obj_t * canvas, lv_canvas_style_t type);

/*=====================
 * Other functions
 *====================*/

/**********************
 *      MACROS
 **********************/

#endif  /*USE_LV_CANVAS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  /*LV_CANVAS_H*/
