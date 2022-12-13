#include "stdio.h"

/*display last number */

int print_last_digit(int n)
{
	int num = n % 10;
	if (num < 0)
		num *= -1;

	return (num);
}
