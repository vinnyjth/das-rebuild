#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

#define KEYMAP( \
    K00, K01, K02, K03, K04,       K06, K07, \
    K10,             K13, K14,       K16, K17, \
    K20, K21, K22, K23, K24,       K26, K27, \
    K30, K31, K32,       K34,                   \
    K40, K41, K42, K43, K44,       K46, K47, \
    K50,       K52, K53, K54, K55, K56, K57, \
                K61, K62, K63, K64, K65,  K66, K67, \
    K70, K71,             K74, K75,             \
    K80, K81, K82, K83, K84, K85, K86, K87, \
    K90, K91, K92, K93, K94, K95, K96, K97, \
    KA0, KA1, KA2, KA3, KA4, KA5, KA6, \
    KB0, KB1, KB2, KB3,      KB5, KB6, KB7,       \
    KC0, KC1, KC2,       KC4, KC5, KC6,       \
    KD0, KD1, KD2, KD3, KD4,  KD5,     KD6, KD7,       \
    KE0, KE1, KE2, KE3,       KE5, KE6, KE7,     \
          KF1,       KF3,                         \
                    KG3, KG6,       \
                                        KH6        \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_NO,     KC_##K06, KC_##K07, }, \
    { KC_##K10, KC_NO,    KC_NO,    KC_##K13, KC_##K14, KC_NO,     KC_##K16, KC_##K17, }, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_NO,     KC_##K26, KC_##K27, }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_NO,    KC_##K34, KC_NO,     KC_NO,    KC_NO,    }, \
    { KC_##K40, KC_##K41, KC_##K42, KC_##K43, KC_##K44, KC_NO,     KC_##K46, KC_##K47, }, \
    { KC_##K50, KC_NO,    KC_##K52, KC_##K53, KC_##K54, KC_##K55, KC_##K56, KC_##K57, }, \
    { KC_NO,    KC_##K61,    KC_##K62, KC_##K63, KC_##K64, KC_##K65,     KC_##K66, KC_##K67, }, \
    { KC_##K70, KC_##K71, KC_NO,    KC_NO,    KC_##K74, KC_##K75, KC_NO,    KC_NO,    }, \
    { KC_##K80, KC_##K81, KC_##K82, KC_##K83, KC_##K84, KC_##K85, KC_##K86, KC_##K87, }, \
    { KC_##K90, KC_##K91, KC_##K92, KC_##K93, KC_##K94, KC_##K95, KC_##K96, KC_##K97, }, \
    { KC_##KA0, KC_##KA1, KC_##KA2, KC_##KA3,    KC_##KA4,    KC_##KA5,     KC_##KA6, KC_NO, }, \
    { KC_##KB0, KC_##KB1, KC_##KB2, KC_##KB3, KC_NO,     KC_##KB5, KC_##KB6, KC_##KB7,     }, \
    { KC_##KC0, KC_##KC1, KC_##KC2, KC_NO,     KC_##KC4, KC_##KC5, KC_##KC6, KC_NO,     }, \
    { KC_##KD0, KC_##KD1, KC_##KD2, KC_##KD3, KC_##KD4, KC_##KD5,     KC_##KD6, KC_##KD7, }, \
    { KC_##KE0, KC_##KE1, KC_##KE2, KC_##KE3, KC_NO,     KC_##KE5, KC_##KE6, KC_##KE7,     }, \
    { KC_NO,     KC_##KF1, KC_NO,     KC_##KF3, KC_NO,     KC_NO,     KC_NO,     KC_NO,     }, \
    { KC_NO,     KC_NO,     KC_NO,     KC_##KG3,     KC_NO,     KC_NO,  KC_##KG6, KC_NO,     }, \
    { KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_##KH6, KC_NO,     }, \
}

#endif