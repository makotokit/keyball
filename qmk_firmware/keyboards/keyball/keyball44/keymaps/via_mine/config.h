/*
This is the c configuration file for the keymap

Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #    define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
// #    define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #    define RGBLIGHT_EFFECT_RGB_TEST
// #    define RGBLIGHT_EFFECT_ALTERNATING
// #    define RGBLIGHT_EFFECT_TWINKLE
#endif

#define TAP_CODE_DELAY 5

// 押してる間に他のキーを押すと複合キーと判定される。つまりレイヤーの反応が速い。
// のですが逆に、間違いタイプが多くなるので、コメントアウトしておきます。
// #define HOLD_ON_OTHER_KEY_PRESS

#define TAPPING_TERM 200

// https://docs.qmk.fm/#/tap_hold
#define TAPPING_TERM_PER_KEY

// これを利用したが、かな、英数の切り替えや誤字が増えた。
// #define PERMISSIVE_HOLD
// だけど、多分Fキーだけ有効にしてもよくなかった。（get_permissive_hold）
// #define PERMISSIVE_HOLD_PER_KEY

// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define COMBO_TERM 60

#define SPLIT_USB_DETECT
// #define SPLIT_USB_TIMEOUT_POOL 500
