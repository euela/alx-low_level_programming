#include "main.h"

/**
 * *display string parameter
 * *
 * *Return :None
 * */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] !='\0'; i++)
		 {
			 _putchar(str[i]);
		 }
	_putchar('\n');
}
