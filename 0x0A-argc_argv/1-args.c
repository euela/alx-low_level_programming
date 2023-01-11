include <stdio.h>
#include <stdlib.h>
/**
 *main - gives number of argumnets
 *@argc: number of arguments to program
 *@argv: array of pointers to arguments
 *
 *
 *RETURN: zero
 */
int main(int argc,char __attribute__((__unused__)) *argv[])
{
  printf("%d\n", argc - 1);
  
  return (0);
}
