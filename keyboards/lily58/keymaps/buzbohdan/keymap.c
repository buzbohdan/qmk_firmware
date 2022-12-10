#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
  _GAME,
  _MODS,
  _MOUSE,
};

#define MY_D LCTL_T(KC_D)
#define MY_K LCTL_T(KC_K)

#define MY_F LSFT_T(KC_F)
#define MY_J LSFT_T(KC_J)

#define MY_S LALT_T(KC_S)
#define MY_L LALT_T(KC_L)

#define MY_A LGUI_T(KC_A)
#define MY_SCLN LGUI_T(KC_SCLN)

#define MY_BSPC LT(_LOWER, KC_BSPC)
#define MY_SPC LT(_RAISE, KC_SPC)
#define MY_ENT LT(_ADJUST, KC_ENT)
#define MY_QUOT LT(_MODS, KC_QUOT)
#define MY_ESC LT(_MOUSE, KC_ESC)

#define VOL_UP KC__VOLUP
#define VOL_DWN KC__VOLDOWN

#define GAME TO(_GAME)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT( \
  KC_1, KC_1, KC_1, KC_1, KC_1, KC_1,                    KC_1, KC_1, KC_1, KC_1, KC_1,    GAME, \
  KC_1,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_GRV, \
  KC_1,    MY_A,    MY_S,    MY_D,    MY_F,    KC_G,                       KC_H,    MY_J,    MY_K,    MY_L, MY_SCLN, KC_QUOT, \
  KC_1,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_1,  KC_1,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS, \
                             KC_1,  MY_ESC, MY_BSPC,  KC_TAB,   MY_ENT,  MY_SPC, MY_QUOT, KC_1 \
),

[_LOWER] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,\
  _______, _______, _______, _______, _______, _______,                    KC_UNDS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, _______, \
  _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, \
  _______, _______, _______, _______, _______, _______, _______,  _______, _______, KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, _______, \
                             _______, _______, _______, _______,  VOL_DWN,  VOL_UP, KC_BRMD, KC_BRMU \
),

[_RAISE] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______,    KC_7,    KC_8,    KC_9, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______,    KC_4,    KC_5,    KC_6, _______,                   _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, _______, \
  _______, _______,    KC_1,    KC_2,    KC_3, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                             _______,    KC_0, _______, _______, _______, _______, _______, _______ \
),

[_ADJUST] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, _______, KC_AMPR, KC_ASTR, KC_LPRN, _______,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, _______,  KC_DLR, KC_PERC, KC_CIRC, _______,                   XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX, \
  XXXXXXX, _______, KC_EXLM,   KC_AT, KC_HASH, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
                             _______, _______, _______, _______, _______,  _______, _______, _______ \
),

[_GAME] = LAYOUT( \
   KC_ESC, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,\
   KC_TAB, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______, \
  KC_LSFT,    KC_A,    KC_S,    KC_D, _______, _______,                    _______, _______, _______, _______, _______, _______, \
  KC_LCTL, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
                             _______,  KC_SPC, _______, _______,  _______, _______, _______, TO(_QWERTY) \
),

[_MODS] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,\
  _______, G(KC_1), G(KC_2), G(KC_3), G(KC_4), G(KC_5),                    _______, _______, _______, _______, _______, _______, \
  _______, A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5),                    _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
                             _______, _______, _______, _______,  _______, _______, _______, _______ \
),

[_MOUSE] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,\
  _______, _______, _______, _______, _______, _______,                    _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, \
  _______, _______, _______, _______, _______, _______,                    _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, \
  _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, \
                             _______, _______, _______, _______,  KC_BTN2, KC_BTN1, _______, _______ \
),
};

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_DRIVER_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_DRIVER_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
