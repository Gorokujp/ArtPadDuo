#pragma once

#define EE_HANDS
#define VIAL_KEYBOARD_UID {0x8f, 0xa7, 0x17, 0xfe, 0xe6, 0xc7, 0xec, 0x0b}
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)

// --- Rotary encoder EC12E24104A6 (left half only) ---
// A: controller pad 6 (GP5), B: pad 5 (GP8), C: pad 4 (GP9, driven low in keymap.c)
// 24 pulses/rev, no detents. 4 = 24 steps/rev, 2 = 48, 1 = 96
#define ENCODER_A_PINS { GP5 }
#define ENCODER_B_PINS { GP8 }
#define ENCODER_RESOLUTIONS { 4 }
// Right half has no encoder: one dummy entry with NO_PIN
// (empty arrays trigger -Werror=array-bounds in the QMK driver)
#define ENCODER_A_PINS_RIGHT { NO_PIN }
#define ENCODER_B_PINS_RIGHT { NO_PIN }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }
