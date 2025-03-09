#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting at 00:00 - 23:59
 *
 */

void jack_bauer(void)
{
	int hour, min;

	hour = 0;
	while (hour <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
