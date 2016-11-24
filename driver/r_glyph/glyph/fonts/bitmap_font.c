/*-------------------------------------------------------------------------*
 * File:  bitmap_font.c
 *-------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------*
 |            Copyright(C) 2009 - Future Designs, Inc.                      |
 |                                                                          |
 |                         All Rights Reserved.                             |
 *-------------------------------------------------------------------------*
 | THE FOLLOWING CONFIDENTIAL INFORMATION IS BEING DISCLOSED TO YOU UNDER A |
 | NON-DISCLOSURE AGREEMENT AND MAY NOT BE DISCLOSED OR FORWARDED BY THE    |
 | RECIPIENT TO ANY OTHER PERSON OR ENTITY NOT COVERED BY THE SAME          |
 | NON-DISCLOSURE AGREEMENT COVERING THE RECIPIENT. USE OF THE FOLLOWING    |
 | CONFIDENTIAL INFORMATION IS RESTRICTED TO THE TERMS OF  NON-DISCLOSURE   |
 | AGREEMENT.                                                               |
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * File Overview:
 *     A Font file.
 *-------------------------------------------------------------------------*
 *               Glyph - The Generic API for Graphics LCD
 * Description:  A Font
 *-------------------------------------------------------------------------*/

#include "glyph_config.h"


const uint8_t  Bitmaps_VolumeBar0[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar1[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar2[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar3[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar4[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar5[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar6[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar7[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar8[] = {
    0x08, 0x29, // width=8, height=41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar9[] = {
    0x08, 0x29, // width=8, height=41
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_VolumeBar10[] = {
    0x08, 0x29, // width=8, height=41
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const uint8_t  Bitmaps_Bars0[] = {
    0x17, 0x10, // width=23, height=16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Bars1[] = {
    0x17, 0x10, // width=23, height=16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Bars2[] = {
    0x17, 0x10, // width=23, height=16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x7C, 0x7C, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Bars3[] = {
    0x17, 0x10, // width=23, height=16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x7C, 0x7C, 0x7C, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Bars4[] = {
    0x17, 0x10, // width=23, height=16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x7C, 0x7C, 0x7C, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Bars5[] = {
    0x17, 0x10, // width=23, height=16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 
    0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x7C, 0x7C, 0x7C, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 
};
const uint8_t  Bitmaps_BatteryLow[] = {
    0x0C, 0x10, // width=12, height=16
    0x00, 0xFC, 0x04, 0x04, 0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0xFC, 0x00, 
    0x00, 0x7F, 0x40, 0x58, 0x58, 0x58, 0x58, 0x58, 0x58, 0x40, 0x7F, 0x00, 
};
const uint8_t  Bitmaps_BatteryHigh[] = {
    0x0C, 0x10, // width=12, height=16
    0x00, 0xFC, 0x04, 0xF4, 0xF6, 0xF6, 0xF6, 0xF6, 0xF4, 0x04, 0xFC, 0x00, 
    0x00, 0x7F, 0x40, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x40, 0x7F, 0x00, 
};
const uint8_t  Bitmaps_AC[] = {
    0x0C, 0x10, // width=12, height=16
    0x00, 0xE0, 0x20, 0x3E, 0x3E, 0x20, 0x20, 0x3E, 0x3E, 0x20, 0xE0, 0x00, 
    0x00, 0x01, 0x02, 0x04, 0x7C, 0x7C, 0x7C, 0x7C, 0x04, 0x02, 0x01, 0x00, 
};
const uint8_t  Bitmaps_Signal[] = {
    0x10, 0x10, // width=16, height=16
    0x00, 0x60, 0x18, 0xC8, 0x24, 0x34, 0x12, 0x92, 0x12, 0x34, 0x24, 0xC8, 0x18, 0x60, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x60, 0x78, 0x7E, 0x7F, 0x7E, 0x78, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Voice[] = {
    0x10, 0x10, // width=16, height=16
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x38, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x88, 0x49, 0x49, 0x2A, 0x2A, 0x00, 0x3D, 0x47, 0x41, 0x40, 0x40, 0x40, 0x00, 0x00, 
};
const uint8_t  Bitmaps_Tone[] = {
    0x10, 0x10, // width=16, height=16
    0x00, 0x00, 0xFE, 0x06, 0x0C, 0x18, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xE0, 0xC0, 0x00, 
    0x00, 0x00, 0x7F, 0x60, 0x30, 0x18, 0x0C, 0x04, 0x04, 0x7C, 0x44, 0x44, 0x7C, 0x07, 0x03, 0x00, 
};
const uint8_t  Bitmaps_NOAA[] = {
    0x20, 0x10, // width=32, height=16
    0x00, 0x00, 0xF0, 0xF0, 0xC0, 0x80, 0xF0, 0xF0, 0x00, 0xE0, 0xF0, 0x30, 0x30, 0xF0, 0xE0, 0x00, 0xE0, 0xF0, 0x30, 0x30, 0xF0, 0xE0, 0x00, 0xE0, 0xF0, 0x30, 0x30, 0xF0, 0xE0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x1F, 0x1F, 0x01, 0x03, 0x1F, 0x1F, 0x00, 0x0F, 0x1F, 0x18, 0x18, 0x1F, 0x0F, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x1F, 0x1F, 0x00, 0x00, 0x00, 
};

const uint8_t  *  Bitmaps_table[256] = {
    Bitmaps_VolumeBar0,
    Bitmaps_VolumeBar1,
    Bitmaps_VolumeBar2,
    Bitmaps_VolumeBar3,
    Bitmaps_VolumeBar4,
    Bitmaps_VolumeBar5,
    Bitmaps_VolumeBar6,
    Bitmaps_VolumeBar7,
    Bitmaps_VolumeBar8,
    Bitmaps_VolumeBar9,
    Bitmaps_VolumeBar10,
    Bitmaps_Bars0,
    Bitmaps_Bars1,
    Bitmaps_Bars2,
    Bitmaps_Bars3,
    Bitmaps_Bars4,
    Bitmaps_Bars5,
    Bitmaps_BatteryLow,
    Bitmaps_BatteryHigh,
    Bitmaps_AC,
    Bitmaps_Signal,
    Bitmaps_Voice,
    Bitmaps_Tone,
    Bitmaps_NOAA,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
