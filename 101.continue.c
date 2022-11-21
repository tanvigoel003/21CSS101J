#include<stdio.h>
void main(void)
{
  //int number;
  printf("registration number : RA2211042010033\n");
  for (int number = 1; number < 10; number ++) 
  {
    if (number == 5)
    {
      continue;
    }
    printf("%d\n",number);
  }
}
