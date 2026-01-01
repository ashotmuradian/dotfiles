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
    FN2, // home row mod layers
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
        KC_ESC,   KC_F1,               KC_F2,               KC_F3,               KC_F4,               KC_F5,        KC_F6,        KC_F7,               KC_F8,               KC_F9,               KC_F10,              KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,  UG_TOGG,
        KC_GRV,   MT(MOD_LCTL, KC_1),  MT(MOD_LSFT, KC_2),  MT(MOD_LALT, KC_3),  MT(MOD_LGUI, KC_4),  LT(1, KC_5),  LT(6, KC_6),  MT(MOD_RGUI, KC_7),  MT(MOD_RALT, KC_8),  MT(MOD_RSFT, KC_9),  MT(MOD_RCTL, KC_0),  KC_MINS,  KC_EQL,   KC_BSPC,           KC_PGUP,
        KC_TAB,   KC_Q,                KC_W,                KC_E,                KC_R,                KC_T,         KC_Y,         KC_U,                KC_I,                KC_O,                KC_P,                KC_LBRC,  KC_RBRC,  KC_BSLS,           KC_PGDN,
        KC_ESC,   KC_A,                KC_S,                KC_D,                KC_F,                KC_G,         KC_H,         KC_J,                KC_K,                KC_L,                KC_SCLN,             KC_QUOT,            KC_ENT,            KC_HOME,
        KC_LSFT,                       KC_Z,                KC_X,                KC_C,                KC_V,         KC_B,         KC_N,                KC_M,                KC_COMM,             KC_DOT,              KC_SLSH,            KC_RSFT,  KC_UP,   KC_END,
        KC_LCTL,  KC_LGUI,             KC_LALT,                                                                     KC_SPC,                                                                      KC_RALT,             KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN, KC_RGHT),

    [FN1] = LAYOUT_ansi_84(
        KC_CAPS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PAUS,  NK_TOGG,  UG_NEXT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            BT_HST1,
        _______,  _______,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  KC_INS,   KC_HOME,  KC_END,   KC_PGDN,  KC_PGUP,  _______,  _______,  _______,            BT_HST2,
        _______,  _______,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENT,   _______,            _______,            BT_HST3,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  KC_BSPC,  KC_DEL,   _______,  _______,            _______,  _______,  P2P4G,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  BAT_LVL),

    [FN2] = LAYOUT_ansi_84(
        MO(9),          KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,          KC_F11,   KC_F12,   KC_PSCR,        KC_DEL,   UG_TOGG,
        KC_GRV,         KC_1,         KC_2,         KC_3,         KC_4,         KC_5,         KC_6,         KC_7,         KC_8,         KC_9,         KC_0,            KC_MINS,  KC_EQL,   KC_BSPC,                  KC_PGUP,
        KC_TAB,         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,            KC_LBRC,  KC_RBRC,  KC_BSLS,                  KC_PGDN,
        KC_ESC,         LT(3, KC_A),  LT(3, KC_S),  LT(3, KC_D),  LT(3, KC_F),  LT(5, KC_G),  LT(6, KC_H),  LT(4, KC_J),  LT(4, KC_K),  LT(4, KC_L),  LT(4, KC_SCLN),  KC_QUOT,            KC_ENT,                   KC_HOME,
        OSM(MOD_LSFT),                KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,          KC_SLSH,            OSM(MOD_RSFT),  KC_UP,    KC_END,
        KC_LCTL,        KC_LGUI,      KC_LALT,                                                KC_SPC,                                                 KC_RALT,         KC_RGUI,  KC_RCTL,  KC_LEFT,        KC_DOWN,  KC_RGHT),

    [FN3] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN4] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN5] = LAYOUT_ansi_84(
        KC_CAPS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PAUS,  NK_TOGG,  UG_NEXT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            BT_HST1,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,   KC_HOME,  KC_END,   KC_PGDN,  KC_PGUP,  _______,  _______,  _______,            BT_HST2,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_ENT,   _______,            _______,            BT_HST3,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  KC_BSPC,  KC_DEL,   _______,  _______,            _______,  _______,  P2P4G,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  BAT_LVL),

    [FN6] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_TAB,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_ESC,   KC_S,     KC_D,     KC_F,     KC_G,     _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN7] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN8] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______),

    [FN9] = LAYOUT_ansi_84(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  MS_WHLL,  MS_WHLR,  MS_WHLU,  MS_WHLD,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  MS_LEFT,  MS_DOWN,  MS_UP,    MS_RGHT,  MS_BTN1,  MS_BTN2,            _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______)
};

#ifdef QUICK_TAP_TERM_PER_KEY
uint16_t get_quick_taps_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OSM(MOD_LSFT):
        case OSM(MOD_RSFT):
            return QUICK_TAP_TERM << 1;
        default:
            return QUICK_TAP_TERM;
    }
}
#endif

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OSM(MOD_LSFT):
        case OSM(MOD_RSFT):
            return TAPPING_TERM << 1;
        default:
            return TAPPING_TERM;
    }
}
#endif

void oneshot_mods_changed_user(uint8_t mods) {
    if (mods & MOD_BIT_LSHIFT) {
        del_mods(MOD_BIT_RSHIFT);
    } else if (mods & MOD_BIT_RSHIFT) {
        del_mods(MOD_BIT_LSHIFT);
    }
}

void oneshot_locked_mods_changed_user(uint8_t mods) {
    if (mods & MOD_BIT_LSHIFT) {
        del_mods(MOD_BIT_RSHIFT);
    } else if (mods & MOD_BIT_RSHIFT) {
        del_mods(MOD_BIT_LSHIFT);
    }
}

uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t *record, uint16_t prev_keycode) {
    if (is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode)) {
        switch (prev_keycode) {
            case KC_SPC:
                return FLOW_TAP_TERM >> 2;
            default:
                return FLOW_TAP_TERM;
        }
    }
    return 0;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->tap.count == 0) {
        switch (keycode) {
            case LT(3, KC_A):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_LCTRL);
                } else {
                    unregister_mods(MOD_BIT_LCTRL);
                }
                break;
            case LT(3, KC_S):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_LSHIFT);
                } else {
                    unregister_mods(MOD_BIT_LSHIFT);
                }
                break;
            case LT(3, KC_D):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_LALT);
                } else {
                    unregister_mods(MOD_BIT_LALT);
                }
                break;
            case LT(3, KC_F):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_LGUI);
                } else {
                    unregister_mods(MOD_BIT_LGUI);
                }
                break;
            case LT(4, KC_SCLN):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_RCTRL);
                } else {
                    unregister_mods(MOD_BIT_RCTRL);
                }
                break;
            case LT(4, KC_L):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_RSHIFT);
                } else {
                    unregister_mods(MOD_BIT_RSHIFT);
                }
                break;
            case LT(4, KC_K):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_RALT);
                } else {
                    unregister_mods(MOD_BIT_RALT);
                }
                break;
            case LT(4, KC_J):
                if (record->event.pressed) {
                    register_mods(MOD_BIT_RGUI);
                } else {
                    unregister_mods(MOD_BIT_RGUI);
                }
                break;
            default:
                break;
        }
    }
    return true;
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     if (!record->event.pressed) {
//         return true;
//     }
//     uint16_t tapcode = get_tap_keycode(keycode);
//     uint8_t mods;
//     switch (tapcode) {
//         case KC_A:
//         case KC_S:
//         case KC_D:
//         case KC_F:
//             mods = get_mods();
//             if (mods & (MOD_BIT_RGUI | MOD_BIT_RALT | MOD_BIT_RSHIFT | MOD_BIT_RCTRL)) {
//                 tap_code(tapcode);
//                 return false;
//             }
//             break;
//         case KC_J:
//         case KC_K:
//         case KC_L:
//         case KC_SCLN:
//             mods = get_mods();
//             if (mods & (MOD_BIT_LGUI | MOD_BIT_LALT | MOD_BIT_LSHIFT | MOD_BIT_LCTRL)) {
//                 tap_code(tapcode);
//                 return false;
//             }
//             break;
//         default:
//             break;
//     }
//     return true;
// }
