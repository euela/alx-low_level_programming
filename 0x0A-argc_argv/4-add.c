#include <stdio.h>
#include <stdlib.h>
/**
 *main -gives all arguments
 *@argc: number of arguments to program
 *@argv:array of pointers to arguments
 *
 *RETURN: zero
 */
int main(int argc, char *argv[])
{
  int i, j;
  int sum = 0;
  

  for (i = 1;i < argc; i++)
    {
      for (j = 0;argv[num][j] != '\0'; j++)
	{
	  if (argv[num][j] < '0' || argv[num][j] > '9')
	    {
	      printf("Error\n");
	      return(1);
	    }
	}
      sum = sum + atoi(argv[i]);
    }
  printf("%d\n", sum);

  return (0);
}
