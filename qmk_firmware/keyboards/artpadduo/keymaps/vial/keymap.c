#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {};

#if defined(ENCODER_MAP_ENABLE)
// Must have the same layer count as keymaps[] (0 layers; assignments are stored in Vial's EEPROM)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {};
#endif

// The controller footprint has no GND pad, so the encoder's common
// terminal (C) is wired to pad 4 (GP9) and driven low here.
// On the right half GP9 is unconnected, so this is harmless.
void keyboard_pre_init_user(void) {
    gpio_set_pin_output(GP9);
    gpio_write_pin_low(GP9);
}
