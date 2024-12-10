#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │  TAB  │   Q   │   W   │   E   │   R   │   T   │                    │   Y   │   U   │   I   │   O   │   P   │ BSPC  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ESC/3  │   A   │   S   │   D   │   F   │   G   │                    │   H   │   J   │   K   │   L   │   ;   │   '   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ESC/LS │   Z   │   X   │   C   │   V   │   B   │                    │   N   │   M   │   ,   │   .   │   /   │ESC/RS │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │  ⌘    │ MO(1) │ ENTER │                    │RSFT/  │ SPACE │ RALT  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */


    [0] = LAYOUT_split_3x6_3(
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
         TT(3), KC_A, KC_S, KC_D, KC_F, KC_G,        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
             KC_LSFT, KC_Z, KC_X, KC_C, KC_V,        KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
              KC_LALT, MO(1), LGUI_T(KC_ESC),        RSFT_T(OSL(2)), KC_SPC, KC_ENT
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │  F1   │  F2   │  F3   │  F4   │ TRNS  │                    │ TRNS  │   7   │   8   │   9   │   -   │  DEL  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │  F5   │  F6   │  F7   │  F8   │ TRNS  │                    │   *   │   4   │   5   │   6   │   =   │   +   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │  F9   │  F10  │  F11  │  F12  │ TRNS  │                    │   0   │   1   │   2   │   3   │   .   │   /   │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │ TRNS  │ TRNS  │ TRNS  │                    │ TRNS  │ TRNS  │ TRNS  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [1] = LAYOUT_split_3x6_3(
            KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS,        KC_TRNS, KC_7, KC_8, KC_9, KC_MINS, KC_DEL,
           KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS,        KC_PAST, KC_4, KC_5, KC_6, KC_EQL, KC_PPLS,
        KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,        KC_0, KC_1, KC_2, KC_3, KC_PDOT, KC_PSLS,
                              KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │ TRNS  │   [   │   \   │   ]   │ TRNS  │                    │   7   │   8   │   9   │   -   │ TRNS  │  DEL  │
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
         KC_GRV, KC_TRNS, KC_LBRC, KC_BSLS, KC_RBRC, KC_TRNS,        KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, KC_LPRN, KC_UNDS, KC_RPRN, KC_TRNS,        KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_LCBR, KC_PIPE, KC_RCBR, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   NO  │   NO  │ MPRV  │ MPLY  │ MNXT  │ BRMU  │                    │ PGUP  │ HOME  │   ↑   │  END  │   NO  │QK_BOOT│
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │   NO  │   NO  │ LCTL  │ LALT  │ LSFT  │ BRMD  │                    │ PGDN  │  ←    │   ↓   │   →   │   NO  │   NO  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │   NO  │   NO  │ MUTE  │ VOLD  │ VOLU  │   NO  │                    │   NO  │   NO  │   NO  │   NO  │   NO  │   NO  │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │   NO  │ TRNS  │   NO  │                    │   NO  │ TRNS  │   NO  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
    */


    [3] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRMU,        KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, QK_BOOT,
        KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_BRMD,        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                   KC_NO, KC_TRNS, KC_NO,        KC_NO, KC_TRNS, KC_NO
    )



};
