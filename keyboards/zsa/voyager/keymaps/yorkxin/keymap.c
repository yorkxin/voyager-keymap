#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  MAC_LOCK,
};



#define DUAL_FUNC_0 LT(14, KC_F12)
#define DUAL_FUNC_1 LT(2, KC_4)
#define DUAL_FUNC_2 LT(14, KC_X)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSLS,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    MT(MOD_LCTL, KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_QUOTE,       
    KC_CAPS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       LT(3, KC_EQUAL),
                                                    LT(1, KC_ENTER),KC_LEFT_SHIFT,                                  DUAL_FUNC_0,    LT(2, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_DELETE,      LSFT(KC_TAB),   LGUI(LSFT(KC_Z)),LGUI(KC_Z),     KC_TAB,         LGUI(KC_X),                                     KC_DELETE,      KC_LBRC,        LSFT(KC_TAB),   KC_TAB,         KC_RBRC,        KC_NO,          
    KC_BSPC,        KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  LGUI(KC_C),                                     KC_PSCR,        DUAL_FUNC_1,    KC_UP,          KC_DOWN,        DUAL_FUNC_2,    LGUI(LSFT(KC_Z)),
    LGUI(KC_A),     KC_NO,          LGUI(LSFT(KC_G)),LGUI(KC_G),     LGUI(KC_F),     LGUI(KC_V),                                     KC_INSERT,      LGUI(KC_LEFT),  KC_PAGE_UP,     KC_PGDN,        LGUI(KC_RIGHT), LGUI(KC_Z),     
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_0,     ST_MACRO_1
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_LPRN,        KC_RPRN,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_EXLM,        KC_LBRC,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_QUES,                                        KC_GRAVE,       KC_DELETE,      LSFT(KC_TAB),   KC_INSERT,      KC_ESCAPE,      KC_NO,          
    KC_HASH,        KC_CIRC,        KC_EQUAL,       KC_UNDS,        KC_DLR,         KC_ASTR,                                        KC_DQUO,        KC_BSPC,        KC_TAB,         KC_SPACE,       KC_ENTER,       KC_NO,          
    KC_NO,          KC_LABK,        KC_PIPE,        KC_MINUS,       KC_RABK,        KC_SLASH,                                       KC_QUOTE,       KC_TILD,        KC_AMPR,        KC_AT,          KC_SLASH,       KC_NO,          
                                                    KC_PERC,        KC_COLN,                                        KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    MAC_LOCK,       KC_F14,         KC_F15,         KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_NO,          KC_NO,                                          LALT(LCTL(KC_DELETE)),KC_NO
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN5,     KC_MS_BTN4,     KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LGUI, KC_MS_BTN2),KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    DRAG_SCROLL,    KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_GRAVE, KC_TAB, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_BSLS, KC_MINUS, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_1, KC_Q, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_2, KC_W, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_3, KC_E, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_4, KC_R, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_5, KC_T, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_6, KC_Y, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_7, KC_U, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_8, KC_I, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_9, KC_O, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_0, KC_P, COMBO_END};
const uint16_t PROGMEM combo12[] = { LT(2, KC_SPACE), DUAL_FUNC_0, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_LEFT_SHIFT, LT(1, KC_ENTER), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_F11),
    COMBO(combo1, KC_F12),
    COMBO(combo2, KC_F1),
    COMBO(combo3, KC_F2),
    COMBO(combo4, KC_F3),
    COMBO(combo5, KC_F4),
    COMBO(combo6, KC_F5),
    COMBO(combo7, KC_F6),
    COMBO(combo8, KC_F7),
    COMBO(combo9, KC_F8),
    COMBO(combo10, KC_F9),
    COMBO(combo11, KC_F10),
    COMBO(combo12, OSM(MOD_HYPR)),
    COMBO(combo13, KC_TRANSPARENT),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_A):
            return TAPPING_TERM + 80;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 40;
        case MT(MOD_LGUI, KC_D):
            return TAPPING_TERM + 10;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -10;
        case KC_BSLS:
            return TAPPING_TERM -95;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -10;
        case MT(MOD_RGUI, KC_K):
            return TAPPING_TERM + 10;
        case MT(MOD_RALT, KC_L):
            return TAPPING_TERM + 40;
        case MT(MOD_RCTL, KC_SCLN):
            return TAPPING_TERM + 80;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {24,243,235}, {196,255,255}, {152,255,255}, {86,255,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {40,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {152,255,255}, {196,255,255}, {24,243,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,218,204}, {0,255,255}, {40,255,255} },

    [1] = { {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {24,243,235}, {196,255,255}, {172,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {152,255,255}, {86,255,255}, {86,255,255}, {152,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {152,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255} },

    [2] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [3] = { {0,255,255}, {24,243,235}, {24,243,235}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0} },

    [4] = { {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {0,218,204}, {0,218,204}, {0,218,204}, {40,255,255}, {40,255,255}, {40,255,255}, {24,243,235}, {196,255,255}, {0,218,204}, {0,218,204}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {0,218,204}, {86,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {0,218,204}, {40,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT))SS_DELAY(10)  SS_LGUI(SS_LSFT(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LEFT))SS_DELAY(10)  SS_LALT(SS_LSFT(SS_TAP(X_RIGHT))));
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSPC);
        } else {
          unregister_code16(KC_BSPC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_BSPC));
        } else {
          unregister_code16(LALT(KC_BSPC));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LEFT);
        } else {
          unregister_code16(KC_LEFT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_LEFT));
        } else {
          unregister_code16(LALT(KC_LEFT));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RIGHT);
        } else {
          unregister_code16(KC_RIGHT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_RIGHT));
        } else {
          unregister_code16(LALT(KC_RIGHT));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
