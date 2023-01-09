#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two array of chars.
 * @s1: array of chars.
 * @s2: array of chars.
 * Return: pointer to array of chars
 */
char *str_concat(char *s1, char *s2)
{
  char *str;
  int len, len1, i, j;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  len = strlen(s1); 

  len1 = strlen(s2);

  str = malloc(sizeof(char)*(len + len1 + 1));

  if(str == NULL)
    {
      free(str);
      return (NULL);
    }

  for(i = 0; i < len; i++)
    str[len] = s1[len];

  for(j = 0; j <= len1; j++)
    str[len + j] = s2[j];

  return (str);
}
