#include "img_conf.h"
#include "lv_conf.h"

#if USE_IMG_BATTERY_FULL != 0 || (LV_APP_USE_INTERNAL_ICONS != 0 && LV_DOWNSCALE == 2)

#include <stdint.h> 
#include "misc/others/color.h"

const color_int_t img_battery_full [] = { /*Width = 32, Height = 18*/ 
32,	/*Width*/
18,	/*Heigth*/
16,	/*Color depth = 16*/
1,	/*Flags: Transp = 1*/
2016, 31727, 31695, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 29614, 31695, 2016, 2016, 2016, 
27469, 14823, 21130, 23275, 23275, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 23275, 21130, 12710, 25356, 2016, 2016, 
16904, 8452, 27469, 35953, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 38066, 27501, 6371, 14791, 2016, 2016, 
10597, 6339, 35921, 48599, 42292, 40179, 40147, 40147, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40147, 40147, 42292, 50712, 38034, 6339, 8452, 2016, 2016, 
10597, 10565, 46518, 57051, 38034, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 29582, 27501, 27469, 35953, 59164, 50712, 12678, 2145, 21162, 2016, 
10597, 10597, 52857, 59196, 29614, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 16904, 14823, 12710, 27501, 59196, 54970, 14823, 0, 6371, 25356, 
10597, 12678, 52857, 57051, 19049, 2145, 2145, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 4226, 2113, 0, 16936, 54970, 54970, 16904, 0, 0, 14823, 
10597, 12678, 52857, 54938, 14823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 52857, 54970, 16904, 0, 0, 10565, 
10597, 12678, 52857, 54938, 16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12710, 54938, 54970, 16904, 0, 0, 10597, 
10597, 12678, 52857, 54938, 16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12710, 54938, 54970, 16904, 0, 0, 12678, 
10597, 12678, 52857, 54938, 16904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12710, 54938, 54970, 16904, 0, 0, 12678, 
10597, 12678, 52857, 54938, 14823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12678, 52857, 54970, 16904, 0, 0, 10597, 
10597, 12678, 52857, 54938, 14791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10597, 52857, 54970, 16904, 0, 0, 8484, 
10597, 12678, 52857, 57083, 23275, 6371, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 8452, 6371, 4258, 21130, 57083, 54970, 16904, 0, 32, 19017, 
10597, 10597, 52857, 63422, 44373, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 33840, 31727, 42292, 65503, 57051, 14791, 2145, 21130, 2016, 
10597, 8452, 42292, 54970, 46486, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40179, 40147, 44405, 57051, 44405, 8484, 6339, 2016, 2016, 
10597, 32, 21162, 29614, 27501, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 27469, 25388, 27501, 31727, 23243, 32, 8452, 2016, 2016, 
21130, 8484, 19017, 23275, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 25356, 19017, 6371, 19017, 2016, 2016, 
};

#endif
