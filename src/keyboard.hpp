/**
 * @file      keyboard.hpp
 * @brief     Header file for keyboard functions and keymaps.
 * @author    hreikin (hreikin@gmail.com)
 * @license   MIT
 * @copyright Copyright (c) 2025 hreikin (hreikin@gmail.com)
 * @date      2025-03-22
 */
#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <Arduino.h>
#include <Wire.h>
#include "keymaps.hpp"

#define I2C_DEV_ADDR 0x55
#define KEYBOARD_BACKLIGHT_PIN 9
#define KEYBOARD_SDA 18
#define KEYBOARD_SCL 8
#define KEYBOARD_POWERON 10           // The board peripheral power control pin needs to be set to HIGH when using the peripheral
#define KEYBOARD_BRIGHTNESS_CH 0      // ledc channel
#define KEYBOARD_BRIGHTNESS_FREQ 1000 // ledc Frequency
#define KEYBOARD_BRIGHTNESS_RES 8     // ledc Resolution_bits
// TODO: fix the brightness values for 255 not 256
#define KEYBOARD_BRIGHTNESS_MAX 255
#define KEYBOARD_BRIGHTNESS_MIN 0
#define KEYBOARD_BRIGHTNESS_DEFAULT 128
#define KEYBOARD_BRIGHTNESS_STEP 32
#define FUNCTION_TOGGLE 0x01
#define FUNCTION_DOWN 0x02
#define FUNCTION_UP 0x03
#define DEBOUNCE_DELAY 50    // 50 milliseconds debounce delay
#define KEY_REPEAT_DELAY 200 // 200 milliseconds key repeat delay
#define MIN_KEYMAP_INDEX 0
#define MAX_KEYMAP_INDEX 8
#define KEY_INFO_SIZE 8
#define EMPTY 0x00
#define MODIFIER_COUNT 4

class Keyboard
{
public:
    // TODO: read keyInfo, set bools for modifiers, set bools for mic/speaker functions, 
    // TODO: set command values for mic/speaker functions, convert keycodes to CP437 character codes,
    // TODO: use wire to set keyboard brightness, handle keymap index, handle alt/ctrl/shift/caps lock
    // TODO: set a charInfo array for the end user, contains modifier bools, function bools, 
    // TODO: function commands, and character codes
    Keyboard();
    void begin();
    void getCharInfo();
    uint8_t getBrightness();
    
    private:
    bool _altState;
    bool _ctrlState;
    bool _shiftState;
    bool _symState;
    bool _micState;
    bool _speakerState;
    uint8_t _micCommand;
    uint8_t _speakerCommand;
    uint8_t _currentBrightness;
    uint8_t _keymapIndex;
    uint8_t _keyInfo[KEY_INFO_SIZE]; // modifier masks, reserved byte, keycode 1, keycode 2, keycode 3, keycode 4, keycode 5, keycode 6
    char (*_defaultKeymap)[COL_COUNT];
    char (*_symbolKeymap1)[COL_COUNT];
    char (*_symbolKeymap2)[COL_COUNT];
    char (*_symbolKeymap3)[COL_COUNT];
    char (*_symbolKeymap4)[COL_COUNT];
    char (*_symbolKeymap5)[COL_COUNT];
    char (*_symbolKeymap6)[COL_COUNT];
    char (*_symbolKeymap7)[COL_COUNT];
    char (*_symbolKeymap8)[COL_COUNT];
    void _readKeys(); // read the key codes, process them and perform an action or return them for the end user to process
    void _setBrightness(uint8_t brightness);
    void _parseHIDModifierBitmask();
    void _parseKeyInfo();
};

#endif // KEYBOARD_HPP