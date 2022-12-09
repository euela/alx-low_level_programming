#include <stdio.h>
#include <ctype.h>
/**/
int main(void)
{
	   int lower_letter = 'a';

	      while (lower_letter <= 'z')
		         {
				       lower_letter = tolower(lower_letter);
				             putchar(lower_letter);
					           lower_letter++;
						         if (lower_letter == 'z')
								       {
									                int upper_letter = 'A';
											         while (upper_letter <= 'Z')
													          {
															              upper_letter = toupper(upper_letter);
																                  putchar(upper_letter);
																		              upper_letter++;
																			               }
												          break;
													        }
							    }
	         putchar('\n');
		    return (0);
}
