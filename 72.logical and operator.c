#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  printf("%d", 4 > 3 && 5 > 4);                            // this will give 1 as output as both the statements are true 
  printf("%d", 10 < 20 && 5 < 4);                          // this will give 0 as output as second statement is false 
  printf("%d", 90 < 80 && 20 > 15);                        // this will give 0 as outpua as first statemet is false 
  printf("%d", 56 < 46 && 46 < 36);                        // this will give 0 as output as both statements as false 
                                                           /* the logical and operator gives 1 (true) as output when all the statement connected with it is true */
}
