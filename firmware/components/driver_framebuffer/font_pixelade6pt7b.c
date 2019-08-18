#include "include/driver_framebuffer.h"
const uint8_t pixelade6pt7bBitmaps[] = {
  0x00, 0xF8, 0xF0, 0x6F, 0xF6, 0x5D, 0x3C, 0x80, 0xD9, 0x15, 0x30, 0x35,
  0x93, 0x60, 0xC0, 0x6A, 0xA4, 0x95, 0x58, 0x5D, 0x00, 0x5D, 0x00, 0x60,
  0xE0, 0x80, 0x19, 0x11, 0x00, 0xF6, 0xA0, 0xD5, 0xEA, 0x70, 0xE8, 0xE0,
  0xBC, 0x90, 0xF8, 0xE0, 0xDA, 0xA0, 0xE5, 0x20, 0xEA, 0xA0, 0xEC, 0xA0,
  0xA0, 0x46, 0x70, 0x30, 0xFC, 0x8D, 0x40, 0xE8, 0x00, 0x7D, 0x6C, 0xF0,
  0xFE, 0xD0, 0xFA, 0xE0, 0xF2, 0x30, 0xF6, 0xE0, 0xFA, 0x70, 0xFE, 0x40,
  0xFE, 0xA0, 0xBE, 0xD0, 0xE9, 0x70, 0x26, 0xF0, 0xBB, 0x50, 0x92, 0x70,
  0xFF, 0x99, 0xBF, 0xD0, 0xF9, 0x96, 0xFA, 0x40, 0xF6, 0xA0, 0xFA, 0xD0,
  0xE8, 0xE0, 0xE9, 0x20, 0xB6, 0xF0, 0x99, 0x60, 0x8D, 0x5C, 0xA0, 0xF0,
  0x69, 0x96, 0x44, 0xF6, 0x8F, 0xEA, 0xAB, 0x83, 0x00, 0x30, 0xD5, 0x57,
  0x00, 0xE0, 0xC0, 0x4F, 0x80, 0x9A, 0xE0, 0x71, 0x80, 0x2E, 0xB0, 0x5D,
  0x00, 0x7D, 0x20, 0xF5, 0xA0, 0x9A, 0xD0, 0xF0, 0x55, 0xC0, 0xBB, 0x50,
  0xF0, 0xF5, 0x6A, 0xD6, 0x80, 0x55, 0x00, 0xF7, 0x40, 0xF5, 0x90, 0xF2,
  0x00, 0xEB, 0x80, 0xBB, 0xB5, 0x80, 0xB5, 0x80, 0x8D, 0x54, 0xAA, 0x80,
  0xB5, 0xB0, 0xEB, 0x80, 0x79, 0x30, 0xF0, 0xCD, 0x60, 0x00 };

const GFXglyph pixelade6pt7bGlyphs[] = {
  {     0,   1,   1,   2,    0,    0 },   // 0x20 ' '
  {     1,   1,   5,   2,    0,   -3 },   // 0x21 '!'
  {     2,   2,   2,   3,    0,   -5 },   // 0x22 '"'
  {     3,   4,   4,   5,    0,   -3 },   // 0x23 '#'
  {     5,   3,   6,   4,    0,   -4 },   // 0x24 '$'
  {     8,   5,   4,   5,    0,   -3 },   // 0x25 '%'
  {    11,   5,   4,   6,    0,   -3 },   // 0x26 '&'
  {    14,   1,   2,   2,    0,   -3 },   // 0x27 '''
  {    15,   2,   8,   3,    0,   -5 },   // 0x28 '('
  {    17,   2,   8,   3,    0,   -5 },   // 0x29 ')'
  {    19,   3,   3,   4,    0,   -5 },   // 0x2A '*'
  {    21,   3,   3,   4,    0,   -2 },   // 0x2B '+'
  {    23,   2,   2,   3,    0,    0 },   // 0x2C ','
  {    24,   3,   1,   3,    0,   -2 },   // 0x2D '-'
  {    25,   1,   1,   1,    0,    0 },   // 0x2E '.'
  {    26,   5,   4,   5,    0,   -3 },   // 0x2F '/'
  {    29,   3,   4,   4,    0,   -3 },   // 0x30 '0'
  {    31,   2,   4,   3,    0,   -3 },   // 0x31 '1'
  {    32,   3,   4,   4,    0,   -3 },   // 0x32 '2'
  {    34,   3,   4,   4,    0,   -3 },   // 0x33 '3'
  {    36,   3,   4,   4,    0,   -3 },   // 0x34 '4'
  {    38,   3,   4,   4,    0,   -3 },   // 0x35 '5'
  {    40,   3,   4,   4,    0,   -3 },   // 0x36 '6'
  {    42,   3,   4,   4,    0,   -3 },   // 0x37 '7'
  {    44,   3,   4,   4,    0,   -3 },   // 0x38 '8'
  {    46,   3,   4,   4,    0,   -3 },   // 0x39 '9'
  {    48,   1,   3,   1,    0,   -2 },   // 0x3A ':'
  {    49,   2,   4,   3,    0,   -2 },   // 0x3B ';'
  {    50,   3,   4,   3,    0,   -3 },   // 0x3C '<'
  {    52,   3,   2,   4,    0,   -2 },   // 0x3D '='
  {    53,   3,   4,   3,    0,   -3 },   // 0x3E '>'
  {    55,   3,   4,   4,    0,   -3 },   // 0x3F '?'
  {    57,   5,   4,   6,    0,   -2 },   // 0x40 '@'
  {    60,   3,   4,   4,    0,   -3 },   // 0x41 'A'
  {    62,   3,   4,   4,    0,   -3 },   // 0x42 'B'
  {    64,   3,   4,   4,    0,   -3 },   // 0x43 'C'
  {    66,   3,   4,   4,    0,   -3 },   // 0x44 'D'
  {    68,   3,   4,   4,    0,   -3 },   // 0x45 'E'
  {    70,   3,   4,   4,    0,   -3 },   // 0x46 'F'
  {    72,   3,   4,   4,    0,   -3 },   // 0x47 'G'
  {    74,   3,   4,   4,    0,   -3 },   // 0x48 'H'
  {    76,   3,   4,   3,    0,   -3 },   // 0x49 'I'
  {    78,   3,   4,   4,    0,   -3 },   // 0x4A 'J'
  {    80,   3,   4,   4,    0,   -3 },   // 0x4B 'K'
  {    82,   3,   4,   4,    0,   -3 },   // 0x4C 'L'
  {    84,   4,   4,   5,    0,   -3 },   // 0x4D 'M'
  {    86,   3,   4,   4,    0,   -3 },   // 0x4E 'N'
  {    88,   4,   4,   5,    0,   -3 },   // 0x4F 'O'
  {    90,   3,   4,   4,    0,   -3 },   // 0x50 'P'
  {    92,   3,   5,   4,    0,   -3 },   // 0x51 'Q'
  {    94,   3,   4,   4,    0,   -3 },   // 0x52 'R'
  {    96,   3,   4,   4,    0,   -3 },   // 0x53 'S'
  {    98,   3,   4,   4,    0,   -3 },   // 0x54 'T'
  {   100,   3,   4,   4,    0,   -3 },   // 0x55 'U'
  {   102,   4,   4,   5,    0,   -3 },   // 0x56 'V'
  {   104,   5,   4,   6,    0,   -3 },   // 0x57 'W'
  {   107,   4,   4,   4,    0,   -3 },   // 0x58 'X'
  {   109,   4,   4,   5,    0,   -3 },   // 0x59 'Y'
  {   111,   4,   4,   4,    0,   -3 },   // 0x5A 'Z'
  {   113,   2,   8,   3,    0,   -5 },   // 0x5B '['
  {   115,   5,   4,   5,    0,   -3 },   // 0x5C '\'
  {   118,   2,   8,   3,    0,   -5 },   // 0x5D ']'
  {   120,   1,   1,   3,    0,    0 },   // 0x5E '^'
  {   121,   3,   1,   3,    0,    0 },   // 0x5F '_'
  {   122,   1,   2,   2,    0,   -4 },   // 0x60 '`'
  {   123,   3,   3,   3,    0,   -2 },   // 0x61 'a'
  {   125,   3,   4,   4,    0,   -3 },   // 0x62 'b'
  {   127,   3,   3,   4,    0,   -2 },   // 0x63 'c'
  {   129,   3,   4,   4,    0,   -3 },   // 0x64 'd'
  {   131,   3,   3,   3,    0,   -2 },   // 0x65 'e'
  {   133,   3,   4,   4,    0,   -3 },   // 0x66 'f'
  {   135,   3,   4,   4,    0,   -2 },   // 0x67 'g'
  {   137,   3,   4,   4,    0,   -3 },   // 0x68 'h'
  {   139,   1,   4,   3,    1,   -3 },   // 0x69 'i'
  {   140,   2,   5,   3,    0,   -3 },   // 0x6A 'j'
  {   142,   3,   4,   4,    0,   -3 },   // 0x6B 'k'
  {   144,   1,   4,   3,    1,   -3 },   // 0x6C 'l'
  {   145,   5,   3,   6,    0,   -2 },   // 0x6D 'm'
  {   147,   3,   3,   5,    1,   -2 },   // 0x6E 'n'
  {   149,   3,   3,   4,    0,   -2 },   // 0x6F 'o'
  {   151,   3,   4,   4,    0,   -2 },   // 0x70 'p'
  {   153,   3,   4,   4,    0,   -2 },   // 0x71 'q'
  {   155,   3,   3,   4,    0,   -2 },   // 0x72 'r'
  {   157,   3,   3,   3,    0,   -2 },   // 0x73 's'
  {   159,   2,   4,   2,    0,   -3 },   // 0x74 't'
  {   160,   3,   3,   4,    0,   -2 },   // 0x75 'u'
  {   162,   3,   3,   4,    0,   -2 },   // 0x76 'v'
  {   164,   5,   3,   6,    0,   -2 },   // 0x77 'w'
  {   166,   3,   3,   4,    0,   -2 },   // 0x78 'x'
  {   168,   3,   4,   4,    0,   -2 },   // 0x79 'y'
  {   170,   3,   3,   3,    0,   -2 },   // 0x7A 'z'
  {   172,   3,   4,   3,    0,   -3 },   // 0x7B '{'
  {   174,   1,   4,   3,    1,   -3 },   // 0x7C '|'
  {   175,   3,   4,   3,    0,   -3 },   // 0x7D '}'
  {   177,   1,   1,   3,    0,    0 } }; // 0x7E '~'

const GFXfont pixelade6pt7b = {
  (uint8_t  *)pixelade6pt7bBitmaps,
  (GFXglyph *)pixelade6pt7bGlyphs,
  0x20, 0x7E, 6 };//B

// Approx. 850 bytes
