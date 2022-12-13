#include <stdio.h>

/*display multiples of 3 and 5*/

int main(void)
{
	int num;
	int add = 0;
	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			add += num;
	}
	printf("%d\n", add);
	return (0);
}
