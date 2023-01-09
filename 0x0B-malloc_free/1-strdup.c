#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates an array of chars.
 * @str: array of chars.
 *
 * Return: pointer to array of chars
 */
char *_strdup(char *str)
{
  char *dup;
  int i,len;

  if (str == NULL)
    return (NULL);

  len = strlen(str);

  dup = (char *)malloc(sizeof(char) * (len + 1));
  
  for(i = 0;i <= len; i++)
    dup[i] = str[i];

  return (dup) ;
}
