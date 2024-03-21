/* Copyright 2023 Shreeram Modi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum planck_layers {
    _COLEMAK,
    _QWERTY,
    _NUM,
    _SYM,
    _MEDIA
};


#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_ESC):
            return TAPPING_TERM;
        case RSFT_T(KC_SLSH):
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Colemak
 * ,---------------------------------------------------------------------------------------------.
 * |     Tab     |  Q   |  W   |  F   |  P   |  G   |  J   |  L   |  U   |  Y   |  ;   | Bksp    |
 * |-------------+------+------+------+------+------+------+------+------+------+------+---------|
 * |     Bksp    |  A   |  R   |  S   |  T   |  D   |  H   |  N   |  E   |  I   |  O   | '       |
 * |-------------+------+------+------+------+------+------+------+------+------+------+---------|
 * | Shift(Enter)|  Z   |  X   |  C   |  V   |  B   |  K   |  M   |  ,   |  .   |  Up  | Shift(/)|
 * |-------------+------+------+------+------+------+------+------+------+------+------+---------|
 * |     Ctrl    | Alt  | MO(4)| Cmd  | TT(2)|    Space    | TT(3)| Enter| Left | Down | Right   |
 * `---------------------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_planck_1x2uC(
    KC_TAB,         KC_Q,    KC_W,  KC_F,    KC_P,  KC_G,   KC_J,  KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
    KC_BSPC,        KC_A,    KC_R,  KC_S,    KC_T,  KC_D,   KC_H,  KC_N,   KC_E,    KC_I,    KC_O,    KC_QUOT,
    LSFT_T(KC_ESC), KC_Z,    KC_X,  KC_C,    KC_V,  KC_B,   KC_K,  KC_M,   KC_COMM, KC_DOT,  KC_UP,   RSFT_T(KC_SLSH),
    KC_LCTL,        KC_LALT, MO(4), KC_LGUI, TT(2), KC_SPC, TT(3), KC_ENT, KC_LEFT, KC_DOWN, KC_RGHT
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |      |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  ;   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  Z   |  X   |  C   |  V   |  B   |  N   |  M   |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_1x2uC(
    KC_TRNS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_TRNS,
    KC_TRNS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_TRNS,
    KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* Num
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |      |      |  7   |  8   |  9   |  -   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |  /   |  4   |  5   |  6   |  +   |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      |      |  1   |  2   |  3   |  *   |  ,   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |  0   |  .   | Enter| Enter|
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = LAYOUT_planck_1x2uC(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_TRNS, KC_TRNS, KC_7, KC_8,    KC_9,    KC_MINS, KC_TRNS,
    KC_TRNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NUM,  KC_PSLS, KC_4, KC_5,    KC_6,    KC_PPLS, KC_PEQL,
    KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_1, KC_2,    KC_3,    KC_PAST, KC_COMM,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_PDOT, KC_ENT, KC_ENT
),

/* Sym
 * ,--------------------------------------------------------------------------------------------.
 * |   `  |   (  |   \  |   )  |      |      |      |  &   |      *      |  -   |        |  Del |
 * |------+------+------+------+------+------+------+------+-------------+------+--------+------|
 * |      |   [  |   _  |   ]  |      |      |  /   |  $   |      %      |  ^   |    =   |  '   |
 * |------+------+------+------+------+------+------+------+-------------+------+--------+------|
 * | CAPS |   {  |   |  |   }  |      |      |  !   |  @   |      #      |  *   |  Pg Up |   ?  |
 * |------+------+------+------+------+------+------+------+-------------+------+--------+------|
 * |      |      |      |      |      |             |      | Shift(Enter)| Home | Pg Down|  End |
 * `--------------------------------------------------------------------------------------------'
 */
[_SYM] = LAYOUT_planck_1x2uC(
    KC_GRV,  KC_TRNS, KC_LPRN, KC_BSLS, KC_RPRN, KC_TRNS, KC_TRNS, KC_AMPR,        KC_ASTR, KC_MINS, KC_SCLN, KC_DEL,
    KC_TRNS, KC_TRNS, KC_LBRC, KC_UNDS, KC_RBRC, KC_TRNS, KC_TRNS, KC_DLR,         KC_PERC, KC_CIRC, KC_EQL,  KC_QUOT,
    KC_CAPS, KC_TRNS, KC_LCBR, KC_PIPE, KC_RCBR, KC_TRNS, KC_TRNS, KC_EXLM,        KC_AT,   KC_HASH, KC_PGUP, KC_QUES,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RSFT_T(KC_ENT), KC_HOME, KC_PGDN, KC_END
),

/*
 * ,-----------------------------------------------------------------------------------.
 * |   `  | Prev | Pause| Next |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Vol- | Mute | Vol+ |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Brt- | Ins  | Brt+ |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |    TG(1)    |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MEDIA] = LAYOUT_planck_1x2uC(
    KC_GRV,  KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_BRID, KC_INS,  KC_BRIU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(1),   KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END
)

};
