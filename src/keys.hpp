/**
 * @file      keys.hpp
 * @brief     Header file for keys.
 * @author    hreikin (hreikin@gmail.com)
 * @license   MIT
 * @copyright Copyright (c) 2025 hreikin (hreikin@gmail.com)
 * @date      2025-03-22
 */
#ifndef KEYS_HPP
#define KEYS_HPP
// HID modifier bitmasks
#define HID_ALT 0x04
#define HID_CTRL 0x01
#define HID_SHIFT 0x02
#define HID_SYM 0x08                                            // Use mask value for LEFT_GUI key
// HID keycodes
#define HID_BACKSPACE 0x2a                                      // Keyboard DELETE (Backspace)
#define HID_ENTER 0x28                                          // Keyboard Return (ENTER)
#define HID_SPACE 0x2c                                          // Keyboard Spacebar
#define HID_DOLLAR_SIGN 0x4e                                    // Keyboard Page Down, used as dollar/speaker
#define HID_MIC 0x4b                                            // Keyboard Page Up, used as mic/0
#define HID_A 0x04                                              // Keyboard a and A
#define HID_B 0x05                                              // Keyboard b and B
#define HID_C 0x06                                              // Keyboard c and C
#define HID_D 0x07                                              // Keyboard d and D
#define HID_E 0x08                                              // Keyboard e and E
#define HID_F 0x09                                              // Keyboard f and F
#define HID_G 0x0a                                              // Keyboard g and G
#define HID_H 0x0b                                              // Keyboard h and H
#define HID_I 0x0c                                              // Keyboard i and I
#define HID_J 0x0d                                              // Keyboard j and J
#define HID_K 0x0e                                              // Keyboard k and K
#define HID_L 0x0f                                              // Keyboard l and L
#define HID_M 0x10                                              // Keyboard m and M
#define HID_N 0x11                                              // Keyboard n and N
#define HID_O 0x12                                              // Keyboard o and O
#define HID_P 0x13                                              // Keyboard p and P
#define HID_Q 0x14                                              // Keyboard q and Q
#define HID_R 0x15                                              // Keyboard r and R
#define HID_S 0x16                                              // Keyboard s and S
#define HID_T 0x17                                              // Keyboard t and T
#define HID_U 0x18                                              // Keyboard u and U
#define HID_V 0x19                                              // Keyboard v and V
#define HID_W 0x1a                                              // Keyboard w and W
#define HID_X 0x1b                                              // Keyboard x and X
#define HID_Y 0x1c                                              // Keyboard y and Y
#define HID_Z 0x1d                                              // Keyboard z and Z
// CP437 character set
#define NUL_CHAR 0x00                                           // NUL
#define START_OF_HEADING 0x01                                   // SOH
#define START_OF_TEXT 0x02                                      // STX
#define END_OF_TEXT 0x03                                        // ETX
#define END_OF_TRANSMISSION 0x04                                // EOT
#define ENQUIRY 0x05                                            // ENQ
#define ACKNOWLEDGE 0x06                                        // ACK
#define BELL 0x07                                               // BEL
#define BACKSPACE 0x08                                          // BS
#define HORIZONTAL_TABULATION 0x09                              // HT
#define LINE_FEED 0x0A                                          // LF
#define VERTICAL_TABULATION 0x0B                                // VT
#define FORM_FEED 0x0C                                          // FF
#define CARRIAGE_RETURN 0x0D                                    // CR
#define SHIFT_OUT 0x0E                                          // SO
#define SHIFT_IN 0x0F                                           // SI
#define DATA_LINK_ESCAPE 0x10                                   // DLE
#define DEVICE_CONTROL_ONE 0x11                                 // DC1
#define DEVICE_CONTROL_TWO 0x12                                 // DC2
#define DEVICE_CONTROL_THREE 0x13                               // DC3
#define DEVICE_CONTROL_FOUR 0x14                                // DC4
#define NEGATIVE_ACKNOWLEDGE 0x15                               // NAK
#define SYNCHRONOUS_IDLE 0x16                                   // SYN
#define END_OF_TRANSMISSION_BLOCK 0x17                          // ETB
#define CANCEL 0x18                                             // CAN
#define END_OF_MEDIUM 0x19                                      // EM
#define SUBSTITUTE 0x1A                                         // SUB
#define ESCAPE 0x1B                                             // ESC
#define FILE_SEPARATOR 0x1C                                     // FS
#define GROUP_SEPARATOR 0x1D                                    // GS
#define RECORD_SEPARATOR 0x1E                                   // RS
#define UNIT_SEPARATOR 0x1F                                     // US,
#define SPACE 0x20                                              // SP
#define EXCLAMATION_MARK 0x21                                   // !
#define QUOTATION_MARK 0x22                                     // "
#define NUMBER_SIGN 0x23                                        // #
#define DOLLAR_SIGN 0x24                                        // $
#define PERCENT_SIGN 0x25                                       // %
#define AMPERSAND 0x26                                          // &
#define APOSTROPHE 0x27                                         // '
#define LEFT_PARENTHESIS 0x28                                   // (
#define RIGHT_PARENTHESIS 0x29                                  // )
#define ASTERISK 0x2A                                           // *
#define PLUS_SIGN 0x2B                                          // +
#define COMMA 0x2C                                              // ,
#define HYPHEN_MINUS 0x2D                                       // -
#define FULL_STOP 0x2E                                          // .
#define SOLIDUS 0x2F                                            // /,
#define DIGIT_ZERO 0x30                                         // 0
#define DIGIT_ONE 0x31                                          // 1
#define DIGIT_TWO 0x32                                          // 2
#define DIGIT_THREE 0x33                                        // 3
#define DIGIT_FOUR 0x34                                         // 4
#define DIGIT_FIVE 0x35                                         // 5
#define DIGIT_SIX 0x36                                          // 6
#define DIGIT_SEVEN 0x37                                        // 7
#define DIGIT_EIGHT 0x38                                        // 8
#define DIGIT_NINE 0x39                                         // 9
#define COLON 0x3A                                              // :
#define SEMICOLON 0x3B                                          // ;
#define LESS_THAN_SIGN 0x3C                                     // <
#define EQUALS_SIGN 0x3D                                        // =
#define GREATER_THAN_SIGN 0x3E                                  // >
#define QUESTION_MARK 0x3F                                      // ?
#define COMMERCIAL_AT 0x40                                      // @
#define LATIN_CAPITAL_LETTER_A 0x41                             // A
#define LATIN_CAPITAL_LETTER_B 0x42                             // B
#define LATIN_CAPITAL_LETTER_C 0x43                             // C
#define LATIN_CAPITAL_LETTER_D 0x44                             // D
#define LATIN_CAPITAL_LETTER_E 0x45                             // E
#define LATIN_CAPITAL_LETTER_F 0x46                             // F
#define LATIN_CAPITAL_LETTER_G 0x47                             // G
#define LATIN_CAPITAL_LETTER_H 0x48                             // H
#define LATIN_CAPITAL_LETTER_I 0x49                             // I
#define LATIN_CAPITAL_LETTER_J 0x4A                             // J
#define LATIN_CAPITAL_LETTER_K 0x4B                             // K
#define LATIN_CAPITAL_LETTER_L 0x4C                             // L
#define LATIN_CAPITAL_LETTER_M 0x4D                             // M
#define LATIN_CAPITAL_LETTER_N 0x4E                             // N
#define LATIN_CAPITAL_LETTER_O 0x4F                             // O
#define LATIN_CAPITAL_LETTER_P 0x50                             // P
#define LATIN_CAPITAL_LETTER_Q 0x51                             // Q
#define LATIN_CAPITAL_LETTER_R 0x52                             // R
#define LATIN_CAPITAL_LETTER_S 0x53                             // S
#define LATIN_CAPITAL_LETTER_T 0x54                             // T
#define LATIN_CAPITAL_LETTER_U 0x55                             // U
#define LATIN_CAPITAL_LETTER_V 0x56                             // V
#define LATIN_CAPITAL_LETTER_W 0x57                             // W
#define LATIN_CAPITAL_LETTER_X 0x58                             // X
#define LATIN_CAPITAL_LETTER_Y 0x59                             // Y
#define LATIN_CAPITAL_LETTER_Z 0x5A                             // Z
#define LEFT_SQUARE_BRACKET 0x5B                                // [
#define REVERSE_SOLIDUS 0x5C                                    // `\` (backslash)
#define RIGHT_SQUARE_BRACKET 0x5D                               // ]
#define CIRCUMFLEX_ACCENT 0x5E                                  // ^
#define LOW_LINE 0x5F                                           // _
#define GRAVE_ACCENT 0x60                                       // `
#define LATIN_SMALL_LETTER_A 0x61                               // a
#define LATIN_SMALL_LETTER_B 0x62                               // b
#define LATIN_SMALL_LETTER_C 0x63                               // c
#define LATIN_SMALL_LETTER_D 0x64                               // d
#define LATIN_SMALL_LETTER_E 0x65                               // e
#define LATIN_SMALL_LETTER_F 0x66                               // f
#define LATIN_SMALL_LETTER_G 0x67                               // g
#define LATIN_SMALL_LETTER_H 0x68                               // h
#define LATIN_SMALL_LETTER_I 0x69                               // i
#define LATIN_SMALL_LETTER_J 0x6A                               // j
#define LATIN_SMALL_LETTER_K 0x6B                               // k
#define LATIN_SMALL_LETTER_L 0x6C                               // l
#define LATIN_SMALL_LETTER_M 0x6D                               // m
#define LATIN_SMALL_LETTER_N 0x6E                               // n
#define LATIN_SMALL_LETTER_O 0x6F                               // o
#define LATIN_SMALL_LETTER_P 0x70                               // p
#define LATIN_SMALL_LETTER_Q 0x71                               // q
#define LATIN_SMALL_LETTER_R 0x72                               // r
#define LATIN_SMALL_LETTER_S 0x73                               // s
#define LATIN_SMALL_LETTER_T 0x74                               // t
#define LATIN_SMALL_LETTER_U 0x75                               // u
#define LATIN_SMALL_LETTER_V 0x76                               // v
#define LATIN_SMALL_LETTER_W 0x77                               // w
#define LATIN_SMALL_LETTER_X 0x78                               // x
#define LATIN_SMALL_LETTER_Y 0x79                               // y
#define LATIN_SMALL_LETTER_Z 0x7A                               // z
#define LEFT_CURLY_BRACKET 0x7B                                 // {
#define VERTICAL_LINE 0x7C                                      // |
#define RIGHT_CURLY_BRACKET 0x7D                                // }
#define TILDE 0x7E                                              // ~
#define DELETE 0x7F                                             // DEL
#define LATIN_CAPITAL_LETTER_C_WITH_CEDILLA 0x80                // Ç
#define LATIN_SMALL_LETTER_U_WITH_DIAERESIS 0x81                // ü
#define LATIN_SMALL_LETTER_E_WITH_ACUTE 0x82                    // é
#define LATIN_SMALL_LETTER_A_WITH_CIRCUMFLEX 0x83               // â
#define LATIN_SMALL_LETTER_A_WITH_DIAERESIS 0x84                // ä
#define LATIN_SMALL_LETTER_A_WITH_GRAVE 0x85                    // à
#define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE 0x86               // å
#define LATIN_SMALL_LETTER_C_WITH_CEDILLA 0x87                  // ç
#define LATIN_SMALL_LETTER_E_WITH_CIRCUMFLEX 0x88               // ê
#define LATIN_SMALL_LETTER_E_WITH_DIAERESIS 0x89                // ë
#define LATIN_SMALL_LETTER_E_WITH_GRAVE 0x8A                    // è
#define LATIN_SMALL_LETTER_I_WITH_DIAERESIS 0x8B                // ï
#define LATIN_SMALL_LETTER_I_WITH_CIRCUMFLEX 0x8C               // î
#define LATIN_SMALL_LETTER_I_WITH_GRAVE 0x8D                    // ì
#define LATIN_CAPITAL_LETTER_A_WITH_DIAERESIS 0x8E              // Ä
#define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE 0x8F             // Å
#define LATIN_CAPITAL_LETTER_E_WITH_ACUTE 0x90                  // É
#define LATIN_SMALL_LIGATURE_AE 0x91                            // æ
#define LATIN_CAPITAL_LIGATURE_AE 0x92                          // Æ
#define LATIN_SMALL_LETTER_O_WITH_CIRCUMFLEX 0x93               // ô
#define LATIN_SMALL_LETTER_O_WITH_DIAERESIS 0x94                // ö
#define LATIN_SMALL_LETTER_O_WITH_GRAVE 0x95                    // ò
#define LATIN_SMALL_LETTER_U_WITH_CIRCUMFLEX 0x96               // û
#define LATIN_SMALL_LETTER_U_WITH_GRAVE 0x97                    // ù
#define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS 0x98                // ÿ
#define LATIN_CAPITAL_LETTER_O_WITH_DIAERESIS 0x99              // Ö
#define LATIN_CAPITAL_LETTER_U_WITH_DIAERESIS 0x9A              // Ü
#define CENT_SIGN 0x9B                                          // ¢
#define POUND_SIGN 0x9C                                         // £
#define YEN_SIGN 0x9D                                           // ¥
#define PESETA_SIGN 0x9E                                        // ₧
#define LATIN_SMALL_LETTER_F_WITH_HOOK 0x9F                     // ƒ
#define LATIN_SMALL_LETTER_A_WITH_ACUTE 0xA0                    // á
#define LATIN_SMALL_LETTER_I_WITH_ACUTE 0xA1                    // í
#define LATIN_SMALL_LETTER_O_WITH_ACUTE 0xA2                    // ó
#define LATIN_SMALL_LETTER_U_WITH_ACUTE 0xA3                    // ú
#define LATIN_SMALL_LETTER_N_WITH_TILDE 0xA4                    // ñ
#define LATIN_CAPITAL_LETTER_N_WITH_TILDE 0xA5                  // Ñ
#define FEMININE_ORDINAL_INDICATOR 0xA6                         // ª
#define MASCULINE_ORDINAL_INDICATOR 0xA7                        // º
#define INVERTED_QUESTION_MARK 0xA8                             // ¿
#define REVERSED_NOT_SIGN 0xA9                                  // ⌐
#define NOT_SIGN 0xAA                                           // ¬
#define VULGAR_FRACTION_ONE_HALF 0xAB                           // ½
#define VULGAR_FRACTION_ONE_QUARTER 0xAC                        // ¼
#define INVERTED_EXCLAMATION_MARK 0xAD                          // ¡
#define LEFT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK 0xAE          // «
#define RIGHT_POINTING_DOUBLE_ANGLE_QUOTATION_MARK 0xAF         // »
#define LIGHT_SHADE 0xB0                                        // ░
#define MEDIUM_SHADE 0xB1                                       // ▒
#define DARK_SHADE 0xB2                                         // ▓
#define BOX_DRAWINGS_LIGHT_VERTICAL 0xB3                        // │
#define BOX_DRAWINGS_LIGHT_VERTICAL_AND_LEFT 0xB4               // ┤
#define BOX_DRAWINGS_VERTICAL_SINGLE_AND_LEFT_DOUBLE 0xB5       // ╡
#define BOX_DRAWINGS_VERTICAL_DOUBLE_AND_LEFT_SINGLE 0xB6       // ╢
#define BOX_DRAWINGS_DOWN_DOUBLE_AND_LEFT_SINGLE 0xB7           // ╖
#define BOX_DRAWINGS_DOWN_SINGLE_AND_LEFT_DOUBLE 0xB8           // ╕
#define BOX_DRAWINGS_DOUBLE_VERTICAL_AND_LEFT 0xB9              // ╣
#define BOX_DRAWINGS_DOUBLE_VERTICAL 0xBA                       // ║
#define BOX_DRAWINGS_DOUBLE_DOWN_AND_LEFT 0xBB                  // ╗
#define BOX_DRAWINGS_DOUBLE_UP_AND_LEFT 0xBC                    // ╝
#define BOX_DRAWINGS_UP_DOUBLE_AND_LEFT_SINGLE 0xBD             // ╜
#define BOX_DRAWINGS_UP_SINGLE_AND_LEFT_DOUBLE 0xBE             // ╛
#define BOX_DRAWINGS_LIGHT_DOWN_AND_LEFT 0xBF                   // ┐
#define BOX_DRAWINGS_LIGHT_UP_AND_RIGHT 0xC0                    // └
#define BOX_DRAWINGS_LIGHT_UP_AND_HORIZONTAL 0xC1               // ┴
#define BOX_DRAWINGS_LIGHT_DOWN_AND_HORIZONTAL 0xC2             // ┬
#define BOX_DRAWINGS_LIGHT_VERTICAL_AND_RIGHT 0xC3              // ├
#define BOX_DRAWINGS_LIGHT_HORIZONTAL 0xC4                      // ─
#define BOX_DRAWINGS_LIGHT_VERTICAL_AND_HORIZONTAL 0xC5         // ┼
#define BOX_DRAWINGS_VERTICAL_SINGLE_AND_RIGHT_DOUBLE 0xC6      // ╞
#define BOX_DRAWINGS_VERTICAL_DOUBLE_AND_RIGHT_SINGLE 0xC7      // ╟
#define BOX_DRAWINGS_DOUBLE_UP_AND_RIGHT 0xC8                   // ╚
#define BOX_DRAWINGS_DOUBLE_DOWN_AND_RIGHT 0xC9                 // ╔
#define BOX_DRAWINGS_DOUBLE_UP_AND_HORIZONTAL 0xCA              // ╩
#define BOX_DRAWINGS_DOUBLE_DOWN_AND_HORIZONTAL 0xCB            // ╦
#define BOX_DRAWINGS_DOUBLE_VERTICAL_AND_RIGHT 0xCC             // ╠
#define BOX_DRAWINGS_DOUBLE_HORIZONTAL 0xCD                     // ═
#define BOX_DRAWINGS_DOUBLE_VERTICAL_AND_HORIZONTAL 0xCE        // ╬
#define BOX_DRAWINGS_UP_SINGLE_AND_HORIZONTAL_DOUBLE 0xCF       // ╧
#define BOX_DRAWINGS_UP_DOUBLE_AND_HORIZONTAL_SINGLE 0xD0       // ╨
#define BOX_DRAWINGS_DOWN_SINGLE_AND_HORIZONTAL_DOUBLE 0xD1     // ╤
#define BOX_DRAWINGS_DOWN_DOUBLE_AND_HORIZONTAL_SINGLE 0xD2     // ╥
#define BOX_DRAWINGS_UP_DOUBLE_AND_RIGHT_SINGLE 0xD3            // ╙
#define BOX_DRAWINGS_UP_SINGLE_AND_RIGHT_DOUBLE 0xD4            // ╘
#define BOX_DRAWINGS_DOWN_SINGLE_AND_RIGHT_DOUBLE 0xD5          // ╒
#define BOX_DRAWINGS_DOWN_DOUBLE_AND_RIGHT_SINGLE 0xD6          // ╓
#define BOX_DRAWINGS_VERTICAL_DOUBLE_AND_HORIZONTAL_SINGLE 0xD7 // ╫
#define BOX_DRAWINGS_VERTICAL_SINGLE_AND_HORIZONTAL_DOUBLE 0xD8 // ╪
#define BOX_DRAWINGS_LIGHT_UP_AND_LEFT 0xD9                     // ┘
#define BOX_DRAWINGS_LIGHT_DOWN_AND_RIGHT 0xDA                  // ┌
#define FULL_BLOCK 0xDB                                         // █
#define LOWER_HALF_BLOCK 0xDC                                   // ▄
#define LEFT_HALF_BLOCK 0xDD                                    // ▌
#define RIGHT_HALF_BLOCK 0xDE                                   // ▐
#define UPPER_HALF_BLOCK 0xDF                                   // ▀
#define GREEK_SMALL_LETTER_ALPHA 0xE0                           // α
#define LATIN_SMALL_LETTER_SHARP_S 0xE1                         // ß
#define GREEK_CAPITAL_LETTER_GAMMA 0xE2                         // Γ
#define GREEK_SMALL_LETTER_PI 0xE3                              // π
#define GREEK_CAPITAL_LETTER_SIGMA 0xE4                         // Σ
#define GREEK_SMALL_LETTER_SIGMA 0xE5                           // σ
#define MICRO_SIGN 0xE6                                         // µ
#define GREEK_SMALL_LETTER_TAU 0xE7                             // τ
#define GREEK_CAPITAL_LETTER_PHI 0xE8                           // Φ
#define GREEK_CAPITAL_LETTER_THETA 0xE9                         // Θ
#define GREEK_CAPITAL_LETTER_OMEGA 0xEA                         // Ω
#define GREEK_SMALL_LETTER_DELTA 0xEB                           // δ
#define INFINITY 0xEC                                           // ∞
#define GREEK_SMALL_LETTER_PHI 0xED                             // φ
#define GREEK_SMALL_LETTER_EPSILON 0xEE                         // ε
#define INTERSECTION 0xEF                                       // ∩
#define IDENTICAL_TO 0xF0                                       // ≡
#define PLUS_MINUS_SIGN 0xF1                                    // ±
#define GREATER_THAN_OR_EQUAL_TO 0xF2                           // ≥
#define LESS_THAN_OR_EQUAL_TO 0xF3                              // ≤
#define TOP_HALF_INTEGRAL 0xF4                                  // ⌠
#define BOTTOM_HALF_INTEGRAL 0xF5                               // ⌡
#define DIVISION_SIGN 0xF6                                      // ÷
#define ALMOST_EQUAL_TO 0xF7                                    // ≈
#define DEGREE_SIGN 0xF8                                        // °
#define BULLET_OPERATOR 0xF9                                    // ∙
#define MIDDLE_DOT 0xFA                                         // ·
#define SQUARE_ROOT 0xFB                                        // √
#define SUPERSCRIPT_LATIN_SMALL_LETTER_N 0xFC                   // ⁿ
#define SUPERSCRIPT_TWO 0xFD                                    // ²
#define BLACK_SQUARE 0xFE                                       // ■
#define NO_BREAK_SPACE 0xFF                                     // NBSP

#endif // KEYS_HPP