// Copyright 2022 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_Q,    C(KC_E),    KC_DELETE,    
        C(KC_Z),    C(KC_S),    C_S_T(KC_S),    
        LALT(KC_COMMA),    KC_S,    LALT(KC_DOT)     
    ),

};