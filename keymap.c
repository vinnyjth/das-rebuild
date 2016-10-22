/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* layer 0 */
    KEYMAP(
            Q,  ESC,   GRV,   TAB,    1,         A,     Z,        \
            W,              CAPS,    2,          S,     X,        \
            E,   F4,   F2,    F3,    3,          D,     C,        \
         PAUS, RCTL, LCTL,          F5,                             \
            I,  F6,   EQL,    RBRC,    8,          K, COMMA,        \
            O,         F8,    F7,    9, MENU,  L,      DOT,        \
                     F11,  F9,  BSPC,  F10, F12,   TAB,   ENT,        \
         SLCK, LALT,              TRNS, LALT,                     \
            R,    G,    5,     T,    4,    B,    F,     V,        \
            U,    H,    6,     Y,    7,    N,    J,     M,        \
            P,   QUOT, MINS, LBRC, 0, SLSH,    SCLN,        \
            P8, P0,  INS,     P5,        RIGHT,    P2, PSLS,              \
            PPLS,    UP, HOME,         END,    LEFT,  ENT,               \
         P9,  PDOT,     PGUP,     P6, PGDN,  PMNS,   P3,  PAST,             \
         P7,  SPC,  DEL,     P4,          DOWN,  P1, NLCK,              \
               MINS,       LGUI,                                \
                                             LSFT, RSFT,               \
                                             RGUI                ),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {66
};
