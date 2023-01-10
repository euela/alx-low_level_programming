#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
  int **matrix;
  int i, j;

  if (width == 0 || height == 0)
    return (NULL);

  matrix = malloc(height * sizeof(int *));
  if (matrix == NULL)
    {
      free(matrix);
      return (NULL);
    }

  for (i = 0; i < height; i++)
    {
      matrix[i] = malloc(width * sizeof(int));
      if (matrix[i] == NULL)
	{
	  for (i--; i >= 0; i--)
	    free(matrix[i]);
	  free(matrix);
	  return (NULL);
	}
    }

  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      matrix[i][j] = 0;

  return (matrix);
}#include "main.h"
#include <stdlib.h>

 /**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: width of the array.
  * @height: height of the array.
  *
  * Return: pointer of an array of integers
  */
int **alloc_grid(int width, int height)
{
  int **matrix;
  int i, j;

  if (width == 0 || height == 0)
    return (NULL);

  matrix = malloc(height * sizeof(int *));
  if (matrix == NULL)
    {
      free(matrix);
      return (NULL);
    }

  for (i = 0; i < height; i++)
    {
      matrix[i] = malloc(width * sizeof(int));
      if (matrix[i] == NULL)
	{
	  for (i--; i >= 0; i--)
	    free(matrix[i]);
	  free(matrix);
	  return (NULL);
	}
    }

  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      matrix[i][j] = 0;

  return (matrix);
}#include "main.h"
#include <stdlib.h>

 /**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: width of the array.
  * @height: height of the array.
  *
  * Return: pointer of an array of integers
  */
int **alloc_grid(int width, int height)
{
  int **matrix;
  int i, j;

  if (width == 0 || height == 0)
    return (NULL);

  matrix = malloc(height * sizeof(int *));
  if (matrix == NULL)
    {
      free(matrix);
      return (NULL);
    }

  for (i = 0; i < height; i++)
    {
      matrix[i] = malloc(width * sizeof(int));
      if (matrix[i] == NULL)
	{
	  for (i--; i >= 0; i--)
	    free(matrix[i]);
	  free(matrix);
	  return (NULL);
	}
    }

  for (i = 0; i < height; i++)
    for (j = 0; j < width; j++)
      matrix[i][j] = 0;

  return (matrix);
}
