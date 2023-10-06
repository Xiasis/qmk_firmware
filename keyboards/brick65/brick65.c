/*
Copyright 2023 PyuPyu

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

#include "brick65.h"

void keyboard_pre_init_kb(void) {
  setPinOutput(C6);
  setPinOutput(B6);

  matrix_init_user();
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);

    if (res) {
        writePin(C6, !led_state.caps_lock);
        writePin(B6, !led_state.scroll_lock);
    }
    return res;
}
const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
    {{0.5, 0.5}, 1},
    {{1.5, 0.5}, 2},
    {{2.5, 0.5}, 3},
    {{3.5, 0.5}, 4},
    {{4.5, 0.5}, 5},
    {{5.5, 0.5}, 6},
    {{6.5, 0.5}, 7},
    {{7.5, 0.5}, 8},
    {{8.5, 0.5}, 9},
    {{9.5, 0.5}, 10},
    {{10.5, 0.5}, 11},
    {{11.5, 0.5}, 12},
    {{12.5, 0.5}, 13},
    {{13.25, 0.5}, 14},
    {{14.5, 0.5}, 15},

    {{14.5, 1.5}, 16},
    {{13.5, 1.5}, 17},
    {{12.5, 1.5}, 18},
    {{11.5, 1.5}, 19},
    {{10.5, 1.5}, 20},
    {{9.5, 1.5}, 21},
    {{8.5, 1.5}, 22},
    {{7.5, 1.5}, 23},
    {{6.5, 1.5}, 24},
    {{5.5, 1.5}, 25},
    {{4.5, 1.5}, 26},
    {{3.5, 1.5}, 27},
    {{2.5, 1.5}, 28},
    {{1.5, 1.5}, 29},
    {{0.5, 1.5}, 30},

    {{0.5, 2.5}, 31},
    {{1.5, 2.5}, 32},
    {{2.5, 2.5}, 33},
    {{3.5, 2.5}, 34},
    {{4.5, 2.5}, 35},
    {{5.5, 2.5}, 36},
    {{6.5, 2.5}, 37},
    {{7.5, 2.5}, 38},
    {{8.5, 2.5}, 39},
    {{9.5, 2.5}, 40},
    {{10.5, 2.5}, 41},
    {{11.5, 2.5}, 42},
    {{12.5, 2.5}, 43},

    {{12.5, 3.5}, 44},
    {{11.5, 3.5}, 45},
    {{10.5, 3.5}, 46},
    {{9.5, 3.5}, 47},
    {{8.5, 3.5}, 48},
    {{7.5, 3.5}, 49},
    {{6.5, 3.5}, 50},
    {{5.5, 3.5}, 51},
    {{4.5, 3.5}, 52},
    {{3.5, 3.5}, 53},
    {{2.5, 3.5}, 54},
    {{1.5, 3.5}, 55},
    {{0.5, 3.5}, 56},

    {{0.5, 4.5}, 57},
    {{1.5, 4.5}, 58},
    {{2.5, 4.5}, 59},
    {{3.5, 4.5}, 60},
    {{4.5, 4.5}, 61},
    {{5.5, 4.5}, 62},
    {{6.5, 4.5}, 63},
    {{7.5, 4.5}, 64},
    {{8.5, 4.5}, 65},
    {{9.5, 4.5}, 66},
    {{10.5, 4.5}, 67}};
