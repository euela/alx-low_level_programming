#include "main.h"

/**
 * *find length of the string
 * *
 * *Return :count
 * */
int _strlen(char *s)
{
	int i;
	int count;

	count=0;
	for (i = 0; s[i] !='\0'; i++)
	{	 
		 count++;
	 }
	return(count);
}
