#pragma once

#define EE_HANDS
#define VIAL_KEYBOARD_UID {0x8f, 0xa7, 0x17, 0xfe, 0xe6, 0xc7, 0xec, 0x0b}
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define PICO_FLASH_SIZE_BYTES (1 * 1024 * 1024)

// --- Rotary encoder EC12E24104A6 (left half only) ---
// Left encoder (A: GP5, B: GP8, resolution) is defined in keyboard.json
// so that Vial Keymap Editor can see it. C (GP9) is driven low in artpadduo.c.
// Right half has no encoder: one dummy entry with NO_PIN
// (empty arrays trigger -Werror=array-bounds in the QMK driver)
#define ENCODER_A_PINS_RIGHT { NO_PIN }
#define ENCODER_B_PINS_RIGHT { NO_PIN }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }
