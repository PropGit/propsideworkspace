/*
############################################################################
# Written by Dave Hein
# Copyright (c) 2012 Parallax, Inc.
# MIT Licensed
############################################################################
*/
#include <stdint.h>

uint8_t vga_array[] = {
 0x0d, 0x00, 0x7c, 0x5c, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x02, 0xfc, 0xbf, 0xa0,
 0x03, 0xf4, 0xbf, 0xa0, 0x0d, 0xf0, 0xff, 0x58,
 0x0a, 0x58, 0xbe, 0xa0, 0x05, 0x5c, 0xbe, 0xa0,
 0x04, 0x5a, 0xbe, 0xa0, 0x09, 0x52, 0xbe, 0xa0,
 0x06, 0xfe, 0xbf, 0xa0, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x2c, 0x5f, 0xbe, 0x00,
 0x06, 0x5e, 0xfe, 0x2c, 0x29, 0x5f, 0xbe, 0x80,
 0x2f, 0x55, 0xbe, 0x08, 0x2a, 0x61, 0x3e, 0xfc,
 0x01, 0x58, 0xfe, 0x80, 0x07, 0xfe, 0xbf, 0xa0,
 0x25, 0x4d, 0x3e, 0xfc, 0x04, 0x52, 0xfe, 0x80,
 0x08, 0x58, 0xbe, 0x84, 0x14, 0x5a, 0xfe, 0xe4,
 0x08, 0x58, 0xbe, 0x80, 0x12, 0x5c, 0xfe, 0xe4,
 0x0b, 0x60, 0xbe, 0x08, 0x28, 0x61, 0xbe, 0x68,
 0x01, 0x62, 0xfe, 0x80, 0x0c, 0x62, 0x3e, 0x00,
 0x0b, 0x56, 0xfe, 0xa0, 0x24, 0xff, 0xbf, 0xa0,
 0x00, 0x4c, 0x7e, 0xfc, 0x07, 0xfe, 0xbf, 0xa0,
 0x25, 0x4d, 0x3e, 0xfc, 0x11, 0x57, 0xfe, 0xe4,
 0x04, 0x56, 0xfe, 0xa0, 0x24, 0xff, 0xbf, 0xa0,
 0x00, 0x4e, 0x7e, 0xfc, 0x07, 0xfe, 0xbf, 0xa0,
 0x25, 0x4f, 0x3e, 0xfc, 0x17, 0x57, 0xfe, 0xe4,
 0x1f, 0x56, 0xfe, 0xa0, 0x24, 0xff, 0xbf, 0xa0,
 0x00, 0x4c, 0x7e, 0xfc, 0x07, 0xfe, 0xbf, 0xa0,
 0x25, 0x4d, 0x3e, 0xfc, 0x1d, 0x57, 0xfe, 0xe4,
 0x01, 0xec, 0xbf, 0x68, 0x10, 0x00, 0x7c, 0x5c,
 0x80, 0x02, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00,
 0x03, 0x01, 0x03, 0x01, 0x02, 0x00, 0x02, 0x00,
 0x03, 0x03, 0x03, 0x03,};

int vga_size = sizeof(vga_array);
/*
+--------------------------------------------------------------------
|  TERMS OF USE: MIT License
+--------------------------------------------------------------------
Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files
(the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge,
publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
+------------------------------------------------------------------
*/

