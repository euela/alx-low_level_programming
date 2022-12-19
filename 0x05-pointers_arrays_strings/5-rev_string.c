#include "main.h"

/**
 * *reverse string
 * *
 * *Return :None
 * */
void rev_string(char *s)
{
	int i;
	int count;
	char tmp;

	for (count=0; s[count] != '\0'; count++)
	{
	}
	    for (i = 0; i < count/2; i++)  
		    {  
			tmp = str1[i];  
			str1[i] = str1[count - i - 1];  
			str1[count - i - 1] = tmp;  
		    }  
}
