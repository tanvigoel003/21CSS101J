#include <stdio.h>
int main()
{
  printf("registration number = RA2211042010033"\n);
  int num1,num2,div;
  printf("\tEnter Two Numbers\n");
  printf("-------- \n");
  printf("Enter First Number : 40 ");
  scanf("%d" , &num1);
  printf("\nEnter Second Number : 7");
  scanf("%d",&num2);
  div = num1/num2;
  printf("\nDivision of %d & %d is = %d" , num1, num2 ,div);
  return 0;
}
