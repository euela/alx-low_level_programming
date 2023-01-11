#include "main.h"

/**
 * _memcpy - copying memory location
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  for (i = 0; i < n; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}
