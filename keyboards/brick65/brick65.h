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

#pragma once

#include "quantum.h"

#define XXX KC_NO

// BRICK65 DEFAULT ANSI LAYOUT
// 6.25U SPACEBAR
// BOTTOM ROW 1.25 , 1.25 , 1.25 , 6.25 , 1.25 , 1.25 CONFIGURATION
// SPLIT SPACEBER 2.75 , 1.25 , 2.25 CONFIGURATION
// 2.25U SPACEBAR AND 6.25U SPACEBAR ARE CONNECTED
#define LAYOUT (\
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, K1F, \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D,           \
	K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K3E,      \
	K40, K41, K42,           K45,      K47,      K49, K4A, K4B,      K4D, K4E, K4F  \
) {\
	{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, XXX, K1E, K1F }, \
	{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, XXX, K2D, XXX, XXX }, \
	{ K30, XXX, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, XXX, K3E, XXX }, \
	{ K40, K41, K42, XXX, XXX, K45, XXX, K47, XXX, K49, K4A, K4B, XXX, K4D, K4E, K4F }  \
}

