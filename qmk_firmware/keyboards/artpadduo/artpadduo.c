#include QMK_KEYBOARD_H

// The controller footprint has no GND pad, so the encoder's common
// terminal (C) is wired to pad 4 (GP9) and driven low here.
// On the right half GP9 is unconnected, so this is harmless.
void keyboard_pre_init_kb(void) {
    gpio_set_pin_output(GP9);
    gpio_write_pin_low(GP9);
    keyboard_pre_init_user();
}
