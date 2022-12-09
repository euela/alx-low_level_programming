#include <stdio.h>
#include <ctype.h>
/*letter removal*/
int main(void)
{
   int letter;

   for (letter = 'a'; letter <= 'z'; letter++)
   {
      if (letter == 'q' || letter == 'e')
      {
         continue;
      }
      putchar(letter);
   }
   putchar('\n');
   return (0);
}
