#include "main.h"

/**
 *  *display the second half of a string.
 *   *
 *    *Return :None
 *     */

void puts_half(char *str)
{
	int count;
       	int n, i;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
