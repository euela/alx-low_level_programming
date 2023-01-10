#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free's a grid of memmory
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
  int i;

  if(grid != NULL && height != 0)
    {
      i = height;

      for(; i>= 0; i--)
	{
	  free(grid[i]);
	}
      
      free(grid);
    }
  
}
