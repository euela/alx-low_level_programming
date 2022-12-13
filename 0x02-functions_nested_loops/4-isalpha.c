#include "stdio.h"
/**
 * *function returns 1 when for letters
 * */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}

