#include <stdio.h>

/*function that checks for lower characters*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
