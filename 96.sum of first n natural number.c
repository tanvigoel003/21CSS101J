#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  printf("printing sum of first n natural numbers.\n");
  int num_to_add;
printf("number of numbers to be added : ");
  scanf("%d",&num_to_add);
  int sum = 0;
  for(int number = 1; number <= num_to_add; number ++) { sum = sum + number;}
  printf("sum of first %d numbers is %d", num_to_add,sum);
}
