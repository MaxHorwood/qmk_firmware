
#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _GAME,
    _MOVE,
    _SYMBOL,
    _GAME_ARROW,
    _NUM,
    _FUN,
    _MEDIA
};

enum custom_keycodes { KC_QWERTY = SAFE_RANGE };

// Left Hand
const uint16_t PROGMEM test_combo_D_F[] = {KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM test_combo_A_S[] = {KC_A, KC_S, COMBO_END};
// const uint16_t PROGMEM test_combo_E_R[] = {KC_E, KC_R, COMBO_END};

// Right Hand
const uint16_t PROGMEM test_combo_J_K[]    = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM test_combo_L_SCLN[] = {KC_L, KC_SCLN, COMBO_END};

combo_t key_combos[] = {
    // Left Hand
    // COMBO(test_combo_A_S, KC_ESC),
    COMBO(test_combo_D_F, KC_ENT),
    // COMBO(test_combo_E_R, KC_LCBR),
    // Right Hand
    COMBO(test_combo_J_K, KC_BSPC),
    COMBO(test_combo_L_SCLN, KC_DEL),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[_QWERTY]     = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, MO(6), MO(2), KC_SPC, KC_ENT, MO(3), MO(5), MO(7), TG(1)),
                                                              [_GAME]       = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, TG(4), KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_ENT, MO(3), KC_TRNS, KC_TRNS, TG(1)),
                                                              [_MOVE]       = LAYOUT(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BSPC, KC_7, KC_8, KC_9, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_DEL, KC_NO, KC_TRNS, KC_0, KC_4, KC_5, KC_6, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_NO, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [_SYMBOL]     = LAYOUT(KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TRNS, KC_CIRC, KC_EXLM, KC_PAST, KC_PIPE, KC_DLR, KC_NO, KC_AT, KC_QUOT, KC_GRV, KC_NO, KC_DEL, KC_TRNS, KC_PLUS, KC_MINS, KC_EQL, KC_UNDS, KC_NUHS, KC_NO, KC_LCBR, KC_LPRN, KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, KC_PERC, KC_AMPR, KC_NUBS, KC_QUES, KC_TRNS, KC_TRNS, KC_NO, KC_RCBR, KC_RPRN, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [_GAME_ARROW] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(1)),
                                                              [_NUM]        = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [_FUN]        = LAYOUT(KC_TRNS, KC_NO, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_F7, KC_F8, KC_F9, KC_SCRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_TRNS, KC_NO, KC_F4, KC_F5, KC_F6, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_TRNS, KC_NO, KC_F1, KC_F2, KC_F3, KC_NUM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [_MEDIA]      = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_VOLU, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO)};

#ifdef OLED_ENABLE
static void print_status_narrow(void) {
    // Print current mode123123
    oled_write_P(PSTR("\n"), false);
    // Print current layer
    oled_write_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Base"), false);
            combo_enable();
            break;
        case _GAME:
            oled_write_P(PSTR("Game"), false);
            combo_disable();
            break;
        case _GAME_ARROW:
            oled_write_P(PSTR("Garo"), false);
            break;
        case _MOVE:
            oled_write_P(PSTR("Move"), false);
            break;
        case _FUN:
            oled_write_P(PSTR("Fun"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Num"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Medi"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symb"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n\n\n"), false);
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.scroll_lock ? PSTR("SCR\n") : PSTR("\n"), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP\n") : PSTR("\n"), false);
    oled_write_P(led_state.num_lock ? PSTR("NUM\n") : PSTR("\n"), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
    }
    return false;
}

#endif

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _SYMBOL, _MOVE, _RAISE);
// }

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif
