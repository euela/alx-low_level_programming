#include "main.h"

/**
 * *swap between variables values
 * *
 * *Return :None
 * */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp =0;
	tmp = *a;
	*a = *b;
	*b = tmp;

}
