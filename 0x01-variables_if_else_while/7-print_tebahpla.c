#include <stdio.h>
#include <ctype.h>
/*reverse order alphabet*/
int main(void)
{
	   int letter = 'z';

	      while (letter >= 'a')
		         {
				       putchar(letter);
				             letter--;
					        }
	         putchar('\n');
		    return (0);
}
