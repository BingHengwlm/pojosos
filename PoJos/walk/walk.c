#include "apilib.h"

void HariMain(void)
{
	char *buf;
	int win, i, x, y;
	api_initmalloc();
	buf = api_malloc(160 * 100);
	win = api_openwin(buf, 160, 100, -1, "×ß -²âÊÔÓÃ³ÌÐò");
	api_boxfilwin(win, 4, 24, 155, 95, 0 /* • */);
	x = 76;
	y = 56;
	api_putstrwin(win, x, y, 0x00ffff00 /* ‰© */, 1, "*");
	for (;;) {
		i = api_getkey(1);
		api_putstrwin(win, x, y, 0x00000000 /* • */, 1, "*"); /* •‚ÅÁ‚· */
		if (i == 'a' && x >   4) { x -= 8; }
		if (i == 'd' && x < 148) { x += 8; }
		if (i == 'w' && y >  24) { y -= 8; }
		if (i == 's' && y <  80) { y += 8; }
		if (i == 0x0a) { break; } /* Enter‚ÅI—¹ */
		api_putstrwin(win, x, y, 0x00ffff00 /* ‰© */, 1, "*");
	}	
	api_closewin(win);
	api_end();
}
