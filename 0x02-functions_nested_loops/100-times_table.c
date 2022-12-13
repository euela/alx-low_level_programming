#include <stdio.h>

/*display n times the time table*/

void print_times_table(int n)
{
	int digit, mult, result;
	if (n <= 15 && n >= 0)
	{
		for (digit = 0; digit <= n; digit++)
		{
			putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				putchar(',');
				putchar(' ');
				result = digit * mult;
				if (result <= 99)
					putchar(' ');

				if (result <= 9)
					putchar(' ');
				if (result >= 100)
				{
					putchar((result / 100) + '0');
					putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10){
					putchar((result / 10) + '0');
				}
				putchar((result % 10) + '0');
			}
			putchar('\n');
		}
	}
}
