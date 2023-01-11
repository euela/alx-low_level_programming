#include <stdio.h>
#include <stdlib.h>

/**
 * main - gives the minimum number of coins.
 *        
 * @argc: number of arguments supplied to program.
 * @argv: array of pointers to arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
  int cents, coins = 0;

  if (argc != 2)
    {
      printf("Error\n");
      return (1);
    }

  cents = atoi(argv[1]);

  for (;cents > 0; cents--)
    {
      
      if ((cents - 25) >= 0)
	{
	  cents -= 25;
	  continue;
	}
      if ((cents - 10) >= 0)
	{
	  cents -= 10;
	  continue;
	}
      if ((cents - 5) >= 0)
	{
	  cents -= 5;
	  continue;
	}
      if ((cents - 2) >= 0)
	{
	  cents -= 2;
	  continue;
	}
      coins++;
    }

  printf("%d\n", coins);

  return (0);
}
