#include "main.h"

/**
 * *display string in reverse
 * *
 * *Return :None
 * */
void print_rev(char *s)
{
	int i;
	int count;

	for (count=0; s[i] != '\0'; count++)
	{
	}

	for (i = count - 1; i >= 0; i--)
	 {
		 _putchar(s[i]);
	 }
	_putchar('\n');
}
