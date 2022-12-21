#include "main.h"

/**
 *_strcmp - string comparing function
 *Return:dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int val;

	val = 0;
	j = 0;
	if(*s1 == *s2)
	{
		for (i = 0;s[i] != '\0';i++)
		{
			if(*s1 != *s2)
			{
			break;
			}
			j++;
		}
	}
	if (s1 != s2)
		val = *s1 - *s2;

	return (val);
}
