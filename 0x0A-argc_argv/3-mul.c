#include <stdio.h>
#include <stdlib.h>
/**
 *main -gives program name
 *@argc: number of arguments to program
 *@argv:array of pointers to arguments
 *
 *RETURN: product
 */
int main(int argc,char *argv[])
{
  int mul,val1,val2;

  if(argc != 3)
    {
      printf("Error\n");
      return (1);
    }

  val1 = atoi(argv[1]);
  val2 = atoi(argv[2]);
  mul = val1 * val2;

  printf("%d\n", mul);

  return (0);
}
