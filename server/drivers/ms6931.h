/*  This is the LCDproc driver for MSI-6931 displays
	as found in the following 1U rack servers by MSI:
		MS-9202
		MS-9205
		MS-9211

    Copyright (C) 2003, Marcel Pommer <marsellus at users dot sourceforge dot net>

	The code is derived from the CFontz driver

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 */

#ifndef MS6931_H
#define MS6931_H

#include "lcd.h"

#define MS6931_DEF_DEVICE "/dev/ttyS1"
#define MS6931_DEF_SIZE "16x2"
#define MS6931_DEF_CELL_WIDTH 5
#define MS6931_DEF_CELL_HEIGHT 8


MODULE_EXPORT int  ms6931_init	(struct lcd_logical_driver *drvthis, char *args);
MODULE_EXPORT void ms6931_close	(struct lcd_logical_driver *drvthis);
MODULE_EXPORT int  ms6931_width	(struct lcd_logical_driver *drvthis);
MODULE_EXPORT int  ms6931_height(struct lcd_logical_driver *drvthis);
MODULE_EXPORT void ms6931_flush	(struct lcd_logical_driver *drvthis);

MODULE_EXPORT int  ms6931_get_contrast	(struct lcd_logical_driver *drvthis);
MODULE_EXPORT void ms6931_set_contrast	(struct lcd_logical_driver *drvthis, int promille);
MODULE_EXPORT void ms6931_backlight		(struct lcd_logical_driver *drvthis, int on);

MODULE_EXPORT void ms6931_chr		(struct lcd_logical_driver *drvthis, int x, int y, char c);
MODULE_EXPORT void ms6931_clear 	(struct lcd_logical_driver *drvthis);
MODULE_EXPORT void ms6931_string	(struct lcd_logical_driver *drvthis, int x, int y, char string[]);
MODULE_EXPORT char ms6931_get_key	(struct lcd_logical_driver *drvthis);
MODULE_EXPORT void ms6931_hbar		(struct lcd_logical_driver *drvthis, int x, int y, int len, int promille, int pattern);
MODULE_EXPORT void ms6931_heartbeat	(struct lcd_logical_driver *drvthis, int state);

#endif /* ndef MS6931_H */