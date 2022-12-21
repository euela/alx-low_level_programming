#include "main.h"

/**
 *_strcmp - string comparing function
 *Return:dest
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	j = 0;
	for(i = 0;i < n;i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	} 
		
}
