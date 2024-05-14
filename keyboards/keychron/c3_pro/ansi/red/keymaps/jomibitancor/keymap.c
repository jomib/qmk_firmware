/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

//enum layers{
//  MAC_BASE,
//  MAC_FN,
//  WIN_BASE,

//};

enum layers{
    WIN_BASE,
    WIN_FN,
};

#define KC_TASK G(KC_TAB)
#define KC_FLXP G(KC_E)

//const key_override_t left_arrow_override = ko_make_basic(MOD_MASK_CSAG, KC_H, KC_LEFT);
//const key_override_t down_arrow_override = ko_make_basic(MOD_MASK_CSAG, KC_J, KC_DOWN);
//const key_override_t up_arrow_override = ko_make_basic(MOD_MASK_CSAG, KC_K, KC_UP);
//const key_override_t right_arrow_override = ko_make_basic(MOD_MASK_CSAG, KC_L, KC_RIGHT);
//
//const key_override_t f14_space_override = ko_make_basic(MOD_MASK_CSAG, KC_SPC, KC_F14);
//
//const key_override_t **key_overrides = (const key_override_t *[]){
//    &left_arrow_override,
//    &down_arrow_override,
//    &up_arrow_override,
//    &right_arrow_override,
//    &f14_space_override,
//    NULL // Null terminate the array of overridasdes!
//};



// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]  = {
    [WIN_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,             KC_F14,   KC_F15,   KC_F16,
        KC_GRV,             KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        LT(WIN_FN, KC_ESC), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                        KC_RSFT,            KC_UP,
        KC_LCTL,            KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_APP,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [WIN_FN] = LAYOUT_tkl_ansi(
        _______,            KC_BRID,     KC_BRIU,     KC_TASK,     KC_FLXP,      BL_DOWN,     BL_UP,       KC_MPRV,     KC_MPLY,     KC_MNXT,     KC_MUTE,     KC_VOLD,        KC_VOLU,       _______,  _______,  BL_STEP,
        _______,            HYPR(KC_1),  HYPR(KC_2),  HYPR(KC_3),  HYPR(KC_4),   HYPR(KC_5),  HYPR(KC_5),  HYPR(KC_6),  HYPR(KC_7),  HYPR(KC_8),  HYPR(KC_8),  HYPR(KC_9),     HYPR(KC_0),    _______,  _______,  _______,  _______,
        _______,            HYPR(KC_Q),  HYPR(KC_W),  HYPR(KC_E),  HYPR(KC_R),   _______,     _______,     _______,     _______,     _______,     _______,     HYPR(KC_LBRC),  HYPR(KC_RBRC), _______,  _______,  _______,  _______,
        _______,            HYPR(KC_A),  HYPR(KC_S),  HYPR(KC_D),  HYPR(KC_F),   HYPR(KC_G),  KC_LEFT,     KC_DOWN,     KC_UP,       KC_RGHT,     _______,     _______,        _______,
        _______,            HYPR(KC_Z),  HYPR(KC_X),  HYPR(KC_C),  HYPR(KC_V),   HYPR(KC_B),  _______,     _______,     _______,     _______,     _______,                     _______,                           _______,
        _______,            _______,     _______,                                KC_LWIN,                              _______,     _______,     _______,     _______,                                  _______, _______,  _______),
};

//[MAC_BASE] = LAYOUT_tkl_ansi(
//        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,
//        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
//        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
//        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
//        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
//        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_APP,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
//

