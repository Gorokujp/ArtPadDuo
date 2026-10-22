#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

#if defined(ENCODER_MAP_ENABLE)
// Default assignments (editable later in Vial)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
};
#endif

// The controller footprint has no GND pad, so the encoder's common
// terminal (C) is wired to pad 4 (GP9) and driven low here.
// On the right half GP9 is unconnected, so this is harmless.
void keyboard_pre_init_user(void) {
    gpio_set_pin_output(GP9);
    gpio_write_pin_low(GP9);
}
