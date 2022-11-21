#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  for (int number = 5; number < 50; number ++) 
  {
    if (number % 2 != 0)
    {
      continue;
    }
    printf("%d\n",number);
  }
}
