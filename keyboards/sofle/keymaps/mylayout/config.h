#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#undef TAPPING_TERM
#define TAPPING_TERM 250
#define PERMISSIVE_HOLD
#define OLED_TIMEOUT 5000 // Hide the oled screen after 5 seocnds
#define OLED_BRIGHTNESS 120
#define SPLIT_WPM_ENABLE
