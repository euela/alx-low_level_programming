#include <stdio.h>

/*display output*/

void print_alphabet(void);

int main(void)
{	
		print_alphabet();
			return (0);
}

 void print_alphabet(void)
{
		for (int i = 'a';i <= 'z';i++)
				{
						putchar(i);		
							}
			putchar(10);
}
