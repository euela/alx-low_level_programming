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
  int i;

  for (i = 0;i < argc; i++)
    printf("%s\n", argv[i]);
  return (0);
}
