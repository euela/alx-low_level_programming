#include<stdio.h>
#include "function_pointers.h"
/**
 *print_name: prints a name
 *@name: string mem
 *@f: function pointer
 *RETURN: void
 */
void print_name(char *name, void (*f)(char *))
{
  if(f != NULL)
    f(name);
}
