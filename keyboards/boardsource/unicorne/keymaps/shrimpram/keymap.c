#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │  TAB  │   Q   │   W   │   E   │   R   │   T   │                    │   Y   │   U   │   I   │   O   │   P   │ BSPC  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │  MO(3)│   A   │   S   │   D   │   F   │   G   │                    │   H   │   J   │   K   │   L   │   ;   │   '   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ESC/LS │   Z   │   X   │   C   │   V   │   B   │                    │   N   │   M   │   ,   │   .   │   /   │ESC/RS │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │   ⌘   │ MO(1) │  ENT  │                    │  SPC  │ MO(2) │  ALT  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [0] = LAYOUT_split_3x6_3(
          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
           TT(3), KC_A, KC_S, KC_D, KC_F, KC_G,        KC_H, KC_J, KC_K, KC_L, KC_SCLN, LCTL_T(KC_QUOT),
        LSFT_T(KC_ESC), KC_Z, KC_X, KC_C, KC_V,        KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ESC),
                        KC_LGUI, TT(1), KC_ENT,        KC_SPC, TT(2), KC_RALT
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │  F1   │  F2   │  F3   │  F4   │  NO   │                    │       │   7   │   8   │   9   │   -   │  TRNS │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │  F5   │  F6   │  F7   │  F8   │  NO   │                    │   *   │   4   │   5   │   6   │   +   │   =   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │  F9   │  F10  │  F11  │  F12  │  NO   │                    │       │   1   │   2   │   3   │   /   │   .   │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │ TRNS  │ TRNS  │ TRNS  │                    │ TRNS  │ TRNS  │   0   │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
    */

    [1] = LAYOUT_split_3x6_3(
            KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO,        KC_NO, KC_7, KC_8, KC_9, KC_MINS, KC_TRNS,
           KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,        KC_PAST, KC_4, KC_5, KC_6, KC_PPLS, KC_EQL,
        KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,        KC_PDOT, KC_1, KC_2, KC_3, KC_PSLS, KC_PDOT,
                            KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_0
    ),


    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │   `   │ TRNS  │   [   │   \   │   ]   │  NO   │                    │  NO   │   &   │   *   │   -   │ TRNS  │  DEL  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │ TRNS  │   (   │   _   │   )   │  NO   │                    │  NO   │   $   │   %   │   ^   │   =   │ TRNS  │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │ TRNS  │ TRNS  │   {   │   |   │   }   │  NO   │                    │  NO   │   !   │   @   │   #   │ TRNS  │ TRNS  │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │ TRNS  │ TRNS  │ TRNS  │                    │ TRNS  │ TRNS  │ TRNS  │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */


    [2] = LAYOUT_split_3x6_3(
         KC_GRV, KC_TRNS, KC_LBRC, KC_BSLS, KC_RBRC, KC_NO,        KC_NO, KC_AMPR, KC_ASTR, KC_MINS, KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, KC_LPRN, KC_UNDS, KC_RPRN, KC_NO,        KC_NO, KC_DLR,  KC_PERC, KC_CIRC, KC_EQL,  KC_TRNS,
        KC_TRNS, KC_TRNS, KC_LCBR, KC_PIPE, KC_RCBR, KC_NO,        KC_NO, KC_EXLM, KC_AT,   KC_HASH, KC_TRNS, KC_TRNS,
                                 KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /*
     * ┌───────┬───────┬───────┬───────┬───────┬───────┐                    ┌───────┬───────┬───────┬───────┬───────┬───────┐
     * │QK_BOOT│  NO   │ MPRV  │ MPLY  │ MNXT  │ BRMU  │                    │ PGUP  │ HOME  │  UP   │  END  │  NO   │  NO   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │  NO   │  NO   │ LCTL  │ LALT  │ LSFT  │ BRMD  │                    │ PGDN  │ LEFT  │ DOWN  │ RGHT  │  NO   │  NO   │
     * ├───────┼───────┼───────┼───────┼───────┼───────┤                    ├───────┼───────┼───────┼───────┼───────┼───────┤
     * │  NO   │  NO   │ MUTE  │ VOLD  │ VOLU  │  NO   │                    │  NO   │  NO   │  NO   │  NO   │  NO   │  NO   │
     * └───────┴───────┴───────┴───────┴───────┴───────┘                    └───────┴───────┴───────┴───────┴───────┴───────┘
     *                         ┌───────┬───────┬───────┐                    ┌───────┬───────┬───────┐
     *                         │  NO   │ TRNS  │  NO   │                    │  NO   │ TRNS  │  NO   │
     *                         └───────┴───────┴───────┘                    └───────┴───────┴───────┘
     */

    [3] = LAYOUT_split_3x6_3(
        QK_BOOT, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_BRMU,        KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, KC_TRNS,
        KC_TRNS, KC_NO, KC_LCTL, KC_LALT, KC_LSFT, KC_BRMD,        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO,
          KC_TRNS, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                 KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS
    )



};
