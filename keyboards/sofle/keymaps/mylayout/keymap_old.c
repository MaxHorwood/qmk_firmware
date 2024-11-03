
#ifdef OLED_ENABLE
#    include QMK_KEYBOARD_H

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [_QWERTY] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, TG(1), MO(6), MO(2), KC_SPC, KC_ENT, MO(3), MO(5), MO(7), KC_NO),
    // [_GAME] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LCTL, KC_LALT, TG(4), KC_SPC, KC_ENT, MO(3), KC_TRNS, KC_TRNS, TG(1)),
    // [_MOVE] = LAYOUT(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_DEL, KC_NO, KC_TRNS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [_SYMBOL] = LAYOUT(KC_GRV, KC_NO, KC_AT, KC_NO, KC_NO, KC_NO, TG(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TRNS, KC_EXLM, KC_PAST, KC_NO, KC_PIPE, KC_NO, KC_NO, KC_AT, KC_QUOT, KC_GRV, KC_NO, KC_DEL, KC_TRNS, KC_PLUS, KC_MINS, KC_EQL, KC_UNDS, KC_NUHS, KC_NO, KC_LCBR, KC_LPRN, KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, KC_PERC, KC_AMPR, KC_NUBS, KC_QUES, KC_TRNS, KC_TRNS, KC_NO, KC_RCBR, KC_RPRN, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [_GAME_ARROW] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [_NUM] = LAYOUT(KC_NO, KC_NO, KC_P0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO),
    // [_FUN] = LAYOUT(KC_NO, KC_NO, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_SCRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_CAPS, KC_NO, KC_BSPC, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_NUM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    // [_MEDIA] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO)
    [_QWERTY]     = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, MO(5), MO(6), MO(2), KC_SPC, KC_ENT, MO(3), MO(5), MO(7), TG(1)),
    [_GAME]       = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LCTL, KC_LALT, TG(4), KC_SPC, KC_ENT, MO(3), KC_TRNS, KC_TRNS, TG(1)),
    [_MOVE]       = LAYOUT(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BSPC, KC_7, KC_8, KC_9, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_DEL, KC_NO, KC_TRNS, KC_0, KC_4, KC_5, KC_6, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_NO, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_SYMBOL]     = LAYOUT(KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TRNS, KC_CIRC, KC_EXLM, KC_PAST, KC_PIPE, KC_DLR, KC_NO, KC_AT, KC_QUOT, KC_GRV, KC_NO, KC_DEL, KC_TRNS, KC_PLUS, KC_MINS, KC_EQL, KC_UNDS, KC_NUHS, KC_NO, KC_LCBR, KC_LPRN, KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, KC_PERC, KC_AMPR, KC_NUBS, KC_QUES, KC_TRNS, KC_TRNS, KC_NO, KC_RCBR, KC_RPRN, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_GAME_ARROW] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_NUM]        = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_FUN]        = LAYOUT(KC_TRNS, KC_NO, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_F7, KC_F8, KC_F9, KC_SCRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_TRNS, KC_NO, KC_F4, KC_F5, KC_F6, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_TRNS, KC_NO, KC_F1, KC_F2, KC_F3, KC_NUM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_MEDIA]      = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_VOLU, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO)};
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = LAYOUT(KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, MO(5), MO(6), MO(2), KC_SPC, KC_ENT, MO(3), MO(5), MO(7), TG(1)),
//     [1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MYCM, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LCTL, KC_LALT, TG(4), KC_SPC, KC_ENT, MO(3), KC_TRNS, KC_TRNS, TG(1)),
//     [2] = LAYOUT(KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BSPC, KC_7, KC_8, KC_9, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_DEL, KC_NO, KC_TRNS, KC_0, KC_4, KC_5, KC_6, KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_NO, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
//     [3] = LAYOUT(KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(1), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_TRNS, KC_CIRC, KC_EXLM, KC_PAST, KC_PIPE, KC_DLR, KC_NO, KC_AT, KC_QUOT, KC_GRV, KC_NO, KC_DEL, KC_TRNS, KC_PLUS, KC_MINS, KC_EQL, KC_UNDS, KC_NUHS, KC_NO, KC_LCBR, KC_LPRN, KC_LBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, KC_PERC, KC_AMPR, KC_NUBS, KC_QUES, KC_TRNS, KC_TRNS, KC_NO, KC_RCBR, KC_RPRN, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
//     [4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
//     [5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
//     [6] = LAYOUT(KC_TRNS, KC_NO, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_F7, KC_F8, KC_F9, KC_SCRL, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_TRNS, KC_NO, KC_F4, KC_F5, KC_F6, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_TRNS, KC_NO, KC_F1, KC_F2, KC_F3, KC_NUM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
//     [7] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_VOLU, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO)
// };
static void print_status_narrow(void) {
    // Print current mode123123
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }
    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("Game\n"), false);
            break;
        case _GAME_ARROW:
            oled_write_P(PSTR("Garow\n"), false);
            break;
        case _MOVE:
            oled_write_P(PSTR("Move\n"), false);
            break;
        case _FUN:
            oled_write_P(PSTR("Fun\n"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Media"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symbl"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
    oled_write_ln_P(PSTR("NUM"), led_usb_state.num_lock);
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
        oled_write_P(PSTR("\n\n"), false);
        oled_write_ln_P(PSTR("!!MAX!!"), false);
        // oled_write_ln_P(PSTR("IS"), false);
        // oled_write_ln_P(PSTR("VERY"), false);
        // oled_write_ln_P(PSTR("COOL!!!"), false);
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
