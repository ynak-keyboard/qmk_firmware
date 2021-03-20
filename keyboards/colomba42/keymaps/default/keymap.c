/* Copyright 2020 ynak
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

#define KC_C_T LCTL_T(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_C_T , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,     KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,     KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_BSLS,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                                  MO(1)  , KC_SPC , KC_LALT,     KC_BSPC, KC_ENT , MO(2)
    //                           `--------+--------+--------'   `--------+--------+--------'
    ),

    [1] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_C_T , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_PPLS, KC_PMNS, KC_PAST, KC_PSLS, KC_EQL , XXXXXXX,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                                  _______, KC_SPC , KC_LALT,     KC_BSPC, KC_ENT , MO(3)
    //                           `--------+--------+--------'   `--------+--------+--------'
    ),

    [2] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------.
       KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,     KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_C_T , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
       KC_LSFT, XXXXXXX, XXXXXXX, KC_PSCR, KC_LGUI, KC_L   ,     KC_GRV , KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_PIPE,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+--------+--------+--------'
                                  MO(3)  , KC_SPC , KC_LALT,     KC_BSPC, KC_ENT , _______
    //                           `--------+--------+--------'   `--------+--------+--------'
    ),

    [3] = LAYOUT( \
    //,--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+---------+--------+--------.
       RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+---------+--------+--------|
       RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
    //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+---------+--------+--------|
       RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,
    //`--------+--------+--------+--------+--------+--------/   \--------+--------+--------+---------+--------+--------'
                                  _______, KC_SPC , KC_LALT,     KC_BSPC, KC_ENT , _______
    //                           `--------+--------+--------'   `--------+--------+--------'
    ),
};
