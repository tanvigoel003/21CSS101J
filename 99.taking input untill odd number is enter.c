#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int number;
  printf("enter the number : \n");
  scanf("%d",&number);
  if (number % 2 == 0) {printf("the entered number is %d\n",number);}
  else {printf("the entered number is not allowed as input");}
}
