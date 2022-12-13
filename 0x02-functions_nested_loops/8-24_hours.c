#include "stdio.h"

/*every minute of the day display*/

void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar(10);
		}
	}

}

