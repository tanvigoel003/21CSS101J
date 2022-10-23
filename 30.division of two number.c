#include <stdio.h>
int main()
{
  printf("registration number = RA2211042010033"\n);
  int num1,num2,div; // declaring the variable 
  printf("Enter Two Numbers\n");
  printf("-------- \n");
  printf("Enter First Number :  ");
  scanf("%d" , &num1); // read the input from the user 
  printf("\nEnter Second Number : ");
  scanf("%d",&num2);
  div = num1/num2;
  printf("\nDivision of %d & %d is = %d" , num1, num2 ,div);
  return 0;
}
