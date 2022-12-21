#include "main.h"



/**
 *_strcat - string concatinatinating function
 *Return:dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int count;

	for (count = 0;dest[count] != '\0';count++)
	{
	}

	for (i = 0;i <= 200;i++)
	{
		dest[count + i] = src[i];

			if(src[i] == '\0')
			{
				dest[count + i] = '\0';
				break;
			}
	}
	return (dest);
}
