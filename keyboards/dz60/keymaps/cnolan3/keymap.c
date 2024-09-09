#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_60_ansi(
		QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		MO(1),            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
		KC_LCTL, KC_LGUI,          KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI,          KC_MENU, KC_RCTL),

	LAYOUT_60_ansi(
		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_F5,    KC_F6,    KC_F7,     KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,           KC_DEL,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_PGDN, KC_PGUP, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_LEFT,   KC_DOWN, KC_UP,   KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME, KC_END,  KC_TRNS,   KC_TRNS,          KC_TRNS,
		UG_TOGG, KC_TRNS,          KC_TRNS,                       KC_TRNS,                              KC_TRNS,  KC_TRNS,          KC_TRNS, KC_TRNS)
};

enum combos {
    SPCA_LGUI,
    SPCS_LALT,
    SPCD_LSFT,
    SPCF_LCTL,
    SPCJ_RCTL,
    SPCK_RSFT,
    SPCL_RALT,
    SPCSCLN_RGUI
};

const uint16_t PROGMEM spca_combo[] = {KC_SPC, KC_A, COMBO_END};
const uint16_t PROGMEM spcs_combo[] = {KC_SPC, KC_S, COMBO_END};
const uint16_t PROGMEM spcd_combo[] = {KC_SPC, KC_D, COMBO_END};
const uint16_t PROGMEM spcf_combo[] = {KC_SPC, KC_F, COMBO_END};
const uint16_t PROGMEM spcj_combo[] = {KC_SPC, KC_J, COMBO_END};
const uint16_t PROGMEM spck_combo[] = {KC_SPC, KC_K, COMBO_END};
const uint16_t PROGMEM spcl_combo[] = {KC_SPC, KC_L, COMBO_END};
const uint16_t PROGMEM spcscln_combo[] = {KC_SPC, KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [SPCA_LGUI] = COMBO(spca_combo, KC_LGUI),
    [SPCS_LALT] = COMBO(spcs_combo, KC_LALT),
    [SPCD_LSFT] = COMBO(spcd_combo, KC_LSFT),
    [SPCF_LCTL] = COMBO(spcf_combo, KC_LCTL),
    [SPCJ_RCTL] = COMBO(spcj_combo, KC_RCTL),
    [SPCK_RSFT] = COMBO(spck_combo, KC_RSFT),
    [SPCL_RALT] = COMBO(spcl_combo, KC_RALT),
    [SPCSCLN_RGUI] = COMBO(spcscln_combo, KC_RGUI)
};
