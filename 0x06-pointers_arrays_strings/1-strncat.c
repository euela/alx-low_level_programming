#include "main.h"

/**
 *_strcat - string concatinatinating function
 *Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (count = 0;dest[count] != '\0';count++)
	{
	}
	i = 0;
	while(src[i]!='\0')
	{
		if(i == n)
		{
			break;
		}
		dest[count + i]=src[i];
		i++;
	}
	dest[count + i] = '\0';
	return dest;
}
