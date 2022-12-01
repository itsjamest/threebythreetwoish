// Copyright 2022 %YOUR_FULL_NAME% (@%YOUR_GITHUB_USERNAME%)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_Q_CST_S = 0,
    TD_CTRLS_TG,
    TD_3_TG,
    TD_X_BOT,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_Q_CST_S] = ACTION_TAP_DANCE_DOUBLE(KC_Q, (C_S_T(KC_S))),
    [TD_CTRLS_TG] = ACTION_TAP_DANCE_LAYER_MOVE(C(KC_S), (0)),
    [TD_3_TG] = ACTION_TAP_DANCE_LAYER_MOVE(KC_3, (1)),
    [TD_X_BOT] = ACTION_TAP_DANCE_DOUBLE(KC_W, QK_BOOT),
};

// Add tap dance item to your keymap in place of a keycode

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_4,    KC_END,  KC_DEL,  
        KC_8,    TD(TD_3_TG),   KC_0,    
        KC_1,    KC_ENT,  KC_2     
    ),
    
    [1] = LAYOUT(
        KC_ESCAPE,    QK_BOOT,  KC_ESCAPE,  
        TD(TD_X_BOT),    TD(TD_CTRLS_TG),   TD(TD_X_BOT),    
        KC_ESCAPE,    KC_ESCAPE,  KC_ESCAPE 
    ),

};