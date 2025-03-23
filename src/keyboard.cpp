/**
 * @file      keyboard.cpp
 * @brief     Implementation of keyboard functions and keymaps.
 * @author    hreikin (hreikin@gmail.com)
 * @license   MIT
 * @copyright Copyright (c) 2025 hreikin (hreikin@gmail.com)
 * @date      2025-03-22
 */
#include "keyboard.hpp"

Keyboard::Keyboard()
{
    _currentBrightness = KEYBOARD_BRIGHTNESS_DEFAULT;
    _keymapIndex = 0;
    _altState = false;
    _ctrlState = false;
    _shiftState = false;
    _symState = false;
    _micState = false;
    _speakerState = false;
    for (int i = 0; i < KEY_INFO_SIZE; ++i)
    {
        _keyInfo[i] = EMPTY;
    }
    _defaultKeymap = defaultKeymap;
    _symbolKeymap1 = symbolKeymap1;
    _symbolKeymap2 = symbolKeymap2;
    _symbolKeymap3 = symbolKeymap3;
    _symbolKeymap4 = symbolKeymap4;
    _symbolKeymap5 = symbolKeymap5;
    _symbolKeymap6 = symbolKeymap6;
    _symbolKeymap7 = symbolKeymap7;
    _symbolKeymap8 = symbolKeymap8;
}

void Keyboard::begin()
{
    // The keyboard peripheral power control pin needs to be set to HIGH when using the peripheral
    pinMode(KEYBOARD_POWERON, OUTPUT);
    digitalWrite(KEYBOARD_POWERON, HIGH);
    Wire.begin(KEYBOARD_SDA, KEYBOARD_SCL);
    // Check keyboard
    Wire.requestFrom(I2C_DEV_ADDR, 1);
    if (Wire.read() == -1)
    {
        while (1)
        {
            Serial.println("Keyboard not online !!!");
            delay(1000);
        }
    }
    else
    {
        Serial.println("Keyboard online.");
    }
}

void Keyboard::getCharInfo()
{
    // Placeholder for getting the character info
    // This function should return the charInfo array for the user.
    // The charInfo array should contain modifier bools, function bools, function commands, and character codes

    _readKeys();
    _parseHIDModifierBitmask();
}

uint8_t Keyboard::getBrightness()
{
    return _currentBrightness;
}

void Keyboard::_readKeys()
{
    // This function should read the key info and process the key presses
    Wire.requestFrom(I2C_DEV_ADDR, KEY_INFO_SIZE);
    for (int i = 0; i < KEY_INFO_SIZE && Wire.available() > 0; i++)
    {
        _keyInfo[i] = Wire.read();
    }
}

void Keyboard::_parseHIDModifierBitmask()
{
    // Array of pointers to modifier state variables
    bool* modifierStates[] = { &_ctrlState, &_shiftState, &_altState, &_symState };

    // Parse the first byte of _keyInfo to determine active modifiers
    for (uint8_t i = 0; i < MODIFIER_COUNT; i++)
    {
        *modifierStates[i] = _keyInfo[0] & (1 << i);
    }
    // debug
    Serial.println("Modifiers: ");
    Serial.print("Ctrl: ");
    Serial.println(_ctrlState);
    Serial.print("Shift: ");
    Serial.println(_shiftState);
    Serial.print("Alt: ");
    Serial.println(_altState);
    Serial.print("Sym: ");
    Serial.println(_symState);
}

void Keyboard::_setBrightness(uint8_t brightness)
{
    // Placeholder for setting the keyboard brightness
    // This function should set the brightness of the keyboard backlight
}

void Keyboard::_parseKeyInfo()
{
    // Placeholder for processing a key info
    // This function should handle the key press based on the current keymap and any shortcuts, modifiers, etc.
}