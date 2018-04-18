const MD_MAX72XX::fontType_t myFont[] PROGMEM = {
    0, // char 0
    0, // char 1
    0, // char 2
    0, // char 3
    0, // char 4
    0, // char 5
    0, // char 6
    0, // char 7
    0, // char 8
    0, // char 9
    0, // char 10
    0, // char 11
    0, // char 12
    0, // char 13
    0, // char 14
    0, // char 15
    0, // char 16
    0, // char 17
    0, // char 18
    0, // char 19
    0, // char 20
    0, // char 21
    0, // char 22
    0, // char 23
    0, // char 24
    0, // char 25
    0, // char 26
    0, // char 27
    0, // char 28
    0, // char 29
    0, // char 30
    0, // char 31
    3, 0x0, 0x0, 0x0, // char 32 - " "
    3, 0x0, 0xbe, 0x0, // char 33 - "!"
    3, 0x0, 0x6, 0x0, // char 34 - """
    3, 0xfe, 0x28, 0xfe, // char 35 - "#"
    3, 0x5c, 0xd6, 0x74, // char 36 - "$"
    3, 0xc4, 0x30, 0x8c, // char 37 - "%"
    3, 0x74, 0x8a, 0x94, // char 38 - "&"
    3, 0x0, 0x6, 0x0, // char 39 - "'"
    3, 0x0, 0x7c, 0x82, // char 40 - "("
    3, 0x82, 0x7c, 0x0, // char 41 - ")"
    3, 0x28, 0x10, 0x28, // char 42 - "*"
    3, 0x10, 0x38, 0x10, // char 43 - "+"
    3, 0x0, 0x80, 0x40, // char 44 - ","
    3, 0x10, 0x10, 0x10, // char 45 - "-"
    3, 0x0, 0x40, 0x0, // char 46 - "."
    3, 0xc0, 0x30, 0xc, // char 47 - "/"
    3, 0xfe, 0x82, 0xfe, // char 48 - "0"
    3, 0x84, 0xfe, 0x80, // char 49 - "1"
    3, 0xf2, 0x92, 0x9e, // char 50 - "2"
    3, 0x82, 0x92, 0xfe, // char 51 - "3"
    3, 0x1e, 0x10, 0xfe, // char 52 - "4"
    3, 0x9e, 0x92, 0xf2, // char 53 - "5"
    3, 0xfe, 0x92, 0xf2, // char 54 - "6"
    3, 0x2, 0xe2, 0x1e, // char 55 - "7"
    3, 0xfe, 0x92, 0xfe, // char 56 - "8"
    3, 0x9e, 0x92, 0xfe, // char 57 - "9"
    3, 0x0, 0x28, 0x0, // char 58 - ":"
    3, 0x80, 0x50, 0x0, // char 59 - ";"
    3, 0x10, 0x28, 0x44, // char 60 - "<"
    3, 0x28, 0x28, 0x28, // char 61 - "="
    3, 0x44, 0x28, 0x10, // char 62 - ">"
    3, 0x4, 0xb2, 0x1c, // char 63 - "?"
    3, 0x7c, 0x92, 0x5c, // char 64 - "@"
    3, 0xfc, 0x22, 0xfc, // char 65 - "A"
    3, 0xfe, 0x92, 0x6c, // char 66 - "B"
    3, 0x7c, 0x82, 0x44, // char 67 - "C"
    3, 0xfe, 0x82, 0x7c, // char 68 - "D"
    3, 0xfe, 0x92, 0x82, // char 69 - "E"
    3, 0xfe, 0x12, 0x2, // char 70 - "F"
    3, 0x7c, 0x82, 0xe4, // char 71 - "G"
    3, 0xfe, 0x10, 0xfe, // char 72 - "H"
    3, 0x82, 0xfe, 0x82, // char 73 - "I"
    3, 0x42, 0x82, 0x7e, // char 74 - "J"
    3, 0xfe, 0x10, 0xee, // char 75 - "K"
    3, 0xfe, 0x80, 0x80, // char 76 - "L"
    3, 0xfe, 0x4, 0xfe, // char 77 - "M"
    3, 0xfe, 0x2, 0xfc, // char 78 - "N"
    3, 0x7c, 0x82, 0x7c, // char 79 - "O"
    3, 0xfe, 0x22, 0x1c, // char 80 - "P"
    3, 0x7c, 0xc2, 0xbc, // char 81 - "Q"
    3, 0xfe, 0x22, 0xdc, // char 82 - "R"
    3, 0x8c, 0x92, 0x62, // char 83 - "S"
    3, 0x2, 0xfe, 0x2, // char 84 - "T"
    3, 0x7e, 0x80, 0x7e, // char 85 - "U"
    3, 0xfe, 0x40, 0x3e, // char 86 - "V"
    3, 0xfe, 0x40, 0xfe, // char 87 - "W"
    3, 0xee, 0x10, 0xee, // char 88 - "X"
    3, 0x1e, 0xe0, 0x1e, // char 89 - "Y"
    3, 0xe2, 0x92, 0x8e, // char 90 - "Z"
    3, 0x0, 0xfe, 0x82, // char 91 - "["
    3, 0xc, 0x30, 0xc0, // char 92 - "\"
    3, 0x82, 0xfe, 0x0, // char 93 - "]"
    3, 0x4, 0x2, 0x4, // char 94 - "^"
    3, 0x80, 0x80, 0x80, // char 95 - "_"
    3, 0x2, 0x4, 0x0, // char 96 - "`"
    3, 0x40, 0xa8, 0xf0, // char 97 - "a"
    3, 0xfc, 0xa0, 0x40, // char 98 - "b"
    3, 0x70, 0x88, 0x50, // char 99 - "c"
    3, 0x40, 0xa0, 0xfc, // char 100 - "d"
    3, 0x70, 0xa8, 0xb0, // char 101 - "e"
    3, 0xf8, 0x24, 0x4, // char 102 - "f"
    3, 0x90, 0xa8, 0x70, // char 103 - "g"
    3, 0xfc, 0x20, 0xc0, // char 104 - "h"
    3, 0xa0, 0xe8, 0x80, // char 105 - "i"
    3, 0x40, 0x80, 0x74, // char 106 - "j"
    3, 0xf8, 0x20, 0xd8, // char 107 - "k"
    3, 0x84, 0xfc, 0x80, // char 108 - "l"
    3, 0xf8, 0x10, 0xf8, // char 109 - "m"
    3, 0xf8, 0x8, 0xf0, // char 110 - "n"
    3, 0x70, 0x88, 0x70, // char 111 - "o"
    3, 0xf8, 0x28, 0x10, // char 112 - "p"
    3, 0x10, 0x28, 0xf8, // char 113 - "q"
    3, 0xf8, 0x8, 0x10, // char 114 - "r"
    3, 0x10, 0xa8, 0x40, // char 115 - "s"
    3, 0x7c, 0x88, 0x80, // char 116 - "t"
    3, 0x78, 0x80, 0x78, // char 117 - "u"
    3, 0xf8, 0x40, 0x38, // char 118 - "v"
    3, 0xf8, 0x40, 0xf8, // char 119 - "w"
    3, 0xd8, 0x20, 0xd8, // char 120 - "x"
    3, 0x98, 0xa0, 0x78, // char 121 - "y"
    3, 0xc8, 0xa8, 0x98, // char 122 - "z"
    3, 0x10, 0xee, 0x82, // char 123 - "{"
    3, 0x0, 0xfe, 0x0, // char 124 - "|"
    3, 0x82, 0xee, 0x10, // char 125 - "}"
    3, 0x2, 0x4, 0x2, // char 126 - "~"
    3, 0x4, 0xa, 0x4, // char 127 - ""
    0, // char 128
    0, // char 129
    0, // char 130
    0, // char 131
    0, // char 132
    0, // char 133
    0, // char 134
    0, // char 135
    0, // char 136
    0, // char 137
    0, // char 138
    0, // char 139
    0, // char 140
    0, // char 141
    0, // char 142
    0, // char 143
    0, // char 144
    0, // char 145
    0, // char 146
    0, // char 147
    0, // char 148
    0, // char 149
    0, // char 150
    0, // char 151
    0, // char 152
    0, // char 153
    0, // char 154
    0, // char 155
    0, // char 156
    0, // char 157
    0, // char 158
    0, // char 159
    0, // char 160
    0, // char 161
    0, // char 162
    0, // char 163
    0, // char 164
    0, // char 165
    0, // char 166
    0, // char 167
    0, // char 168
    0, // char 169
    0, // char 170
    0, // char 171
    0, // char 172
    0, // char 173
    0, // char 174
    0, // char 175
    0, // char 176
    0, // char 177
    0, // char 178
    0, // char 179
    0, // char 180
    0, // char 181
    0, // char 182
    0, // char 183
    0, // char 184
    0, // char 185
    0, // char 186
    0, // char 187
    0, // char 188
    0, // char 189
    0, // char 190
    0, // char 191
    0, // char 192
    0, // char 193
    0, // char 194
    0, // char 195
    0, // char 196
    0, // char 197
    0, // char 198
    0, // char 199
    0, // char 200
    0, // char 201
    0, // char 202
    0, // char 203
    0, // char 204
    0, // char 205
    0, // char 206
    0, // char 207
    0, // char 208
    0, // char 209
    0, // char 210
    0, // char 211
    0, // char 212
    0, // char 213
    0, // char 214
    0, // char 215
    0, // char 216
    0, // char 217
    0, // char 218
    0, // char 219
    0, // char 220
    0, // char 221
    0, // char 222
    0, // char 223
    0, // char 224
    0, // char 225
    0, // char 226
    0, // char 227
    0, // char 228
    0, // char 229
    0, // char 230
    0, // char 231
    0, // char 232
    0, // char 233
    0, // char 234
    0, // char 235
    0, // char 236
    0, // char 237
    0, // char 238
    0, // char 239
    0, // char 240
    0, // char 241
    0, // char 242
    0, // char 243
    0, // char 244
    0, // char 245
    0, // char 246
    0, // char 247
    0, // char 248
    0, // char 249
    0, // char 250
    0, // char 251
    0, // char 252
    0, // char 253
    0, // char 254
    0, // char 255
};
