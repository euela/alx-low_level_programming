#include "main.h"

/**
 * *_strcpy - copy string to another string
 * @dest: pointer
 * @src: poiter
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}
