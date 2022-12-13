#include "stdio.h"

/*provides absolute value */

int _abs(int i)
{

	if (i > 0)
		return (i);

	else if (i < 0)
		return (-i);

	else
		return (0);

}

