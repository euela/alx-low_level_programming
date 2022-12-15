#include "main.h"

/* display numbers from 0-9 with new line*/

void print_most_numbers(void)
{
	int num;
	for (num = 48; num < 58; num++)
	{
		if ((num == 50) || (num == 52))
		{
			continue;
		}
		putchar(num);
	}
	putchar(10);
}
