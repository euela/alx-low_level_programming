#include <stdio.h>
#include <ctype.h>
/*hexadecimal display with for loop*/
int main(void)
{
	   int number;

	      for (number = '0'; number <= '9'; number++)
		         {
				       putchar(number);
				             if (number == '9')
						           {
								            number = 'a';
									             for (; number <= 'f'; number++)
											              {
													                  putchar(number);
															           }
										              break;
											            }
					        }
	         putchar('\n');
		    return (0);
}

