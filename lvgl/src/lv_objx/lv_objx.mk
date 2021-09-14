CSRCS += lv_arc.c
CSRCS += lv_bar.c
CSRCS += lv_cb.c
CSRCS += lv_cpicker.c
CSRCS += lv_ddlist.c
CSRCS += lv_kb.c
CSRCS += lv_line.c
CSRCS += lv_preload.c
CSRCS += lv_roller.c
CSRCS += lv_table.c
CSRCS += lv_tileview.c
CSRCS += lv_btn.c
CSRCS += lv_calendar.c
CSRCS += lv_chart.c
CSRCS += lv_canvas.c
CSRCS += lv_gauge.c
CSRCS += lv_label.c
CSRCS += lv_slider.c
CSRCS += lv_ta.c
CSRCS += lv_spinbox.c
CSRCS += lv_btnm.c
CSRCS += lv_cont.c
CSRCS += lv_img.c
CSRCS += lv_imgbtn.c
CSRCS += lv_lmeter.c
CSRCS += lv_page.c
CSRCS += lv_sw.c

DEPPATH += --dep-path $(LVGL_DIR)/lvgl/src/lv_objx
VPATH += :$(LVGL_DIR)/lvgl/src/lv_objx

CFLAGS += "-I$(LVGL_DIR)/lvgl/src/lv_objx"
