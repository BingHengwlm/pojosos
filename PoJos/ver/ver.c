#include "apilib.h"

void HariMain(void)
{
	char *buf;
	int win;

	api_initmalloc();
	buf = api_malloc(150 * 50 * 4);
	win = api_openwin(buf, 185, 50, -1, "�汾");
	api_putstrwin(win, 28, 28, 0 /* �� */, 12, "Pojos os 1.0-pre1");
	for (;;) {
		if (api_getkey(1) == 0x0a) {
			break; /* Enter�Ȃ�break; */
		}
	}
	api_end();
}
