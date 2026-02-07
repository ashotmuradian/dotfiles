/* Copyright 2024 ~ 2025 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers {
    FN0, // fallback layers
    FN1,
    FN2, // number row mod layers
    FN3,
    FN4,
    FN5,
    FN6,
    FN7,
    FN8,
    FN9,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [FN0] = LAYOUT_ansi_84(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,  KC_F4,  KC_F5,  KC_F6,   KC_F7,  KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,  UG_TOGG,
        KC_GRV,   KC_1,     KC_2,     KC_3,   KC_4,   KC_5,   KC_6,    KC_7,   KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,   KC_R,   KC_T,   KC_Y,    KC_U,   KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,           KC_PGDN,
        MO(1),    KC_A,     KC_S,     KC_D,   KC_F,   KC_G,   KC_H,    KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,            KC_HOME,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,   KC_V,   KC_B,   KC_N,    KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,                      KC_RSFT,  KC_UP,   KC_END,
        KC_LCTL,  KC_LGUI,  KC_LALT,                          KC_SPC,                              KC_RALT,  KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT),

    [FN1] = LAYOUT_ansi_84(
        KC_CAPS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PAUS,  NK_TOGG,  UG_NEXT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            BT_HST1,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,  _______,  _______,            BT_HST2,
        _______,  _______,  _______,  _______,  MO(9),    _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,            _______,            BT_HST3,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_BSPC,  _______,  _______,  KC_DEL,   _______,                      _______,  _______,  P2P4G,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  BAT_LVL),

    [FN2] = LAYOUT_ansi_84(
        KC_ESC,           KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_F5,  KC_F6,   KC_F7,            KC_F8,            KC_F9,            KC_F10,           KC_F11,   KC_F12,   KC_PSCR,          KC_DEL,   UG_TOGG,
        KC_GRV,           LM(4, MOD_LCTL),  LM(4, MOD_LSFT),  LM(4, MOD_LALT),  LM(4, MOD_LGUI),  KC_NO,  KC_NO,   LM(5, MOD_RGUI),  LM(5, MOD_RALT),  LM(5, MOD_RSFT),  LM(5, MOD_RCTL),  KC_MINS,  KC_EQL,   KC_BSPC,                    KC_PGUP,
        KC_TAB,           KC_Q,             KC_W,             KC_E,             KC_R,             KC_T,   KC_Y,    KC_U,             KC_I,             KC_O,             KC_P,             KC_LBRC,  KC_RBRC,  KC_BSLS,                    KC_PGDN,
        MO(7),            KC_A,             KC_S,             KC_D,             KC_F,             KC_G,   KC_H,    KC_J,             KC_K,             KC_L,             KC_SCLN,          KC_QUOT,            KC_ENT,                     KC_HOME,
        LM(3, MOD_LSFT),  KC_Z,             KC_X,             KC_C,             KC_V,             KC_B,   KC_N,    KC_M,             KC_COMM,          KC_DOT,           KC_SLSH,                              LM(3, MOD_RSFT),  KC_UP,    KC_END,
        KC_LCTL,          MO(9),            MO(6),                                                        KC_SPC,                                                        KC_RALT,          KC_RGUI,  KC_RCTL,  KC_LEFT,          KC_DOWN,  KC_RGHT),

    [FN3] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN4] = LAYOUT_ansi_84(
        _______,  _______,          _______,          _______,          _______,          _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  LM(4, MOD_LCTL),  LM(4, MOD_LSFT),  LM(4, MOD_LALT),  LM(4, MOD_LGUI),  _______,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,  _______,            _______,
        _______,  _______,          _______,          _______,          _______,          _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,          _______,          _______,          _______,          _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,          _______,          _______,          _______,          _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,
        _______,  _______,          _______,                                                        _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN5] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          _______,          _______,          _______,          _______,  _______,  _______,  _______,  _______,
        _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     _______,  LM(5, MOD_RGUI),  LM(5, MOD_RALT),  LM(5, MOD_RSFT),  LM(5, MOD_RCTL),  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          _______,          _______,          _______,          _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          _______,          _______,          _______,          _______,            _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          _______,          _______,          _______,                              _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                                        _______,          _______,  _______,  _______,  _______,  _______),

    [FN6] = LAYOUT_ansi_84(
        KC_CAPS,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PAUS,  QK_MAGIC_TOGGLE_NKRO,  UG_NEXT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                         BT_HST1,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,  _______,  _______,                         BT_HST2,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENT,   _______,            _______,                         BT_HST3,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_BSPC,  _______,  _______,  KC_DEL,   _______,                      _______,  _______,               P2P4G,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,               BAT_LVL),

    [FN7] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_4,     KC_5,     KC_6,     _______,  _______,            _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_0,     KC_1,     KC_2,     KC_3,     _______,                      _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN8] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN9] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  MS_WHLL,  MS_WHLU,  MS_WHLD,  MS_WHLR,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  MS_ACL2,  MS_ACL1,  MS_ACL0,  _______,  MS_LEFT,  MS_DOWN,  MS_UP,    MS_RGHT,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  MS_BTN1,  MS_BTN2,  MS_BTN3,  _______,  _______,                      _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t base = get_highest_layer(default_layer_state);
    if (base != FN2) {
        return true;
    }

    static uint8_t lm[DYNAMIC_KEYMAP_LAYER_COUNT];

    uint8_t l = QK_LAYER_MOD_GET_LAYER(keycode);
    if (l != FN4 && l != FN5) {
        return true;
    }

    if (record->event.pressed) {
        if (lm[l]++ == 0) {
            layer_on(l);
        }
    } else {
        if (--lm[l] == 0) {
            layer_off(l);
        }
    }

    uint8_t m = QK_LAYER_MOD_GET_MODS(keycode);
    if (m != 0) {
        if (m & 0x10) {
            // because m is actually mods_5bit and not mods_8bit
            m = (m & 0x0F) << 4;
        }
        if (record->event.pressed) {
            register_mods(m);
        } else {
            unregister_mods(m);
        }
    }

    return false;
}

