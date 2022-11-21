#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  printf("since we have not entered second condition the for loop will not terminate , printing the output infinitely,\n");
  int i;
  for (i = 0; ;i ++) {printf("this is an output for infinite loop\n");}
}
