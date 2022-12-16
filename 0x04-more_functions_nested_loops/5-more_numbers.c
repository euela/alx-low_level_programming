#include <stdio.h>

/*print numbers but not 2 and  4*/

void more_numbers(void)
{
	int num, num;

	for (num = 0; num < 10; num++)
	{
		for (num1 = 0; num1 <= 14; num1++)

		{
			if (num1 > 9)
			{
				putchar((num1 / 10) + '0');
			}
			putchar((num1 % 10) + '0');
		}
		putchar(10);
	}
}
