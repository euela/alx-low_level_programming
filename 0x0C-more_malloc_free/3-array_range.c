#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *
 *Return: pointer to newly created array.
 *NULL if malloc fails.
 *NULL if min > max.
 */
int *array_range(int min, int max)
{
  int value, i;
  int *c;

  value = 0;

  if (min > max)
    return (NULL);

  value = ((max + 1) - min);

  c = malloc(range * sizeof(int));

  if (c == NULL)
    return (NULL);

  for (i = 0; i < value; i++)
    {
      *(c + i) = min + i;
    }

  return (c);
}
