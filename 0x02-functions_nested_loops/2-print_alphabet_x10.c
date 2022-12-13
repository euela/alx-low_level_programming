#include <stdio.h>

/*display output 10 times*/

void print_alphabet_x10(void)
{int j;
		for (j = 0;j < 10;j++)
				{int i;
							for (i = 'a';i <= 'z';i++)
										{
													putchar(i);		
															}
									putchar(10);
										}
}
