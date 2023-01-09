#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer to array of chars
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i; 
  char *str;

  if(size == 0)
    return (NULL);

  str = malloc(sizeof(c)*size);
  
  if(str == NULL)
    return (NULL);
  
  for(i = 0;i < size; i++)
    str[i] = c;

  return (str);
}
