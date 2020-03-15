#include "stdlib.h"
#include <stdio.h>
#include "apilib.h"
#include <stdarg.h>
 
int printf(char *format, ...)
{
	va_list ap;
	char s[1000];
	int i;
	
	va_start(ap, format);
	i = vsprintf(s, format, ap);
	api_putstr0(s);
	va_end(ap);
	return i;
}

void HariMain(void)
{
	const char *days[] = {"周日","周一","周二","周三","周四","周五","周六"};
	const int second = api_rtc(RTC_SECOND);
	const int minute = api_rtc(RTC_MINUTE);
	const int hour = api_rtc(RTC_HOURS);
	const int weekday = api_rtc(RTC_WEEKDAY);
	const int day = api_rtc(RTC_DAY_OF_MONTH);
	const int month = api_rtc(RTC_MONTH);
	const int year = api_rtc(RTC_YEAR);
	const int century = api_rtc(RTC_CENTURY);
	printf("%d-%d-%d %s %d:%02d:%02d\n", 
		century*100+year, month, day, days[weekday], hour, minute, second);
	api_end();
}
