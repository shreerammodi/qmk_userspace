#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │  TAB  │   Q   │   W   │   E   │   R   │   T   │                    │   Y   │   U   │   I   │   O   │   P   │ BSPC  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ LCTRL │   A   │   S   │   D   │   F   │   G   │                    │   H   │   J   │   K   │   L   │   ;   │   '   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │SFT/ESC│   Z   │   X   │   C   │   V   │   B   │                    │   N   │   M   │   ,   │   .   │   /   │SFT/ESC│
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │  ⌘    │ MO(1) │ ENTER │                    │ SPACE │ MO(2) │ RALT  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [0] = LAYOUT_split_3x6_3(
          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
         KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        LSFT_T(KC_ESC), KC_Z, KC_X, KC_C, KC_V,        KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ESC),
                        KC_LGUI, MO(1), KC_ENT,        KC_SPC, MO(2), KC_RALT
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │  F1   │  F2   │  F3   │  F4   │ PGUP  │                    │ HOME  │  ↑    │  END  │ TRNS  │ TRNS  │ TRNS  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │  F5   │  F6   │  F7   │  F8   │ PGDN  │                    │  ←    │  ↓    │  →    │ TRNS  │ TRNS  │ TRNS  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │  F9   │  F10  │  F11  │  F12  │ TRNS  │                    │ TRNS  │ TRNS  │ TRNS  │ TRNS  │ TRNS  │ TRNS  │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │ TRNS  │ TRNS  │ TRNS  │                    │ TRNS  │ MO(3) │ TRNS  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [1] = LAYOUT_split_3x6_3(
            KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_PGUP,        KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS,
           KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_PGDN,        KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                              KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, MO(3), KC_TRNS
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │ TRNS  │   [   │   \   │   ]   │ TRNS  │                    │   7   │   8   │   9   │   -   │ TRNS  │ TRNS  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │ TRNS  │   (   │   _   │   )   │ TRNS  │                    │   4   │   5   │   6   │   =   │   /   │ TRNS  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │ TRNS  │   {   │   |   │   }   │ TRNS  │                    │   1   │   2   │   3   │   0   │   .   │ TRNS  │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │ TRNS  │ MO(3) │ TRNS  │                    │ TRNS  │ TRNS  │ TRNS  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [2] = LAYOUT_split_3x6_3(
         KC_GRV, KC_TRNS, KC_LBRC, KC_BSLS, KC_RBRC, KC_TRNS,        KC_7, KC_8, KC_9, KC_MINS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_LPRN, KC_UNDS, KC_RPRN, KC_TRNS,        KC_4, KC_5, KC_6, KC_EQL, KC_PSLS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_LCBR, KC_PIPE, KC_RCBR, KC_TRNS,        KC_1, KC_2, KC_3, KC_0, KC_PDOT, KC_TRNS,
                                     KC_TRNS, MO(3), KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   NO  │   NO  │ MRWD  │ MPLY  │ MFFD  │   NO  │                    │   NO  │   NO  │   NO  │   NO  │   NO  │QK_BOOT│
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │   NO  │   NO  │   NO  │ BRID  │ BRIU  │   NO  │                    │   NO  │   NO  │   NO  │   NO  │   NO  │   NO  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │   NO  │   NO  │ MUTE  │ VOLD  │ VOLU  │   NO  │                    │   NO  │   NO  │   NO  │   NO  │   NO  │   NO  │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │   NO  │ TRNS  │   NO  │                    │   NO  │ TRNS  │   NO  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [3] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT,
          KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                 KC_NO, KC_TRNS, KC_NO,        KC_NO, KC_TRNS, KC_NO
    )



};
