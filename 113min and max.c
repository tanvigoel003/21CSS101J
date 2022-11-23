#include <stdio.h>
void main(void)
{
  printf("Registration number : RA2211042010033\n");
  int num1, num2, num3;
  printf("Enter three numbers : ",num1, num2, num3);
  scanf("%d %d %d",&num1, &num2, &num3);
  printf("The max and min of three numbers are : ");
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      printf("%d ",num1);
    }
  }
  if (num2 > num3)
  {
    if (num2 > num1)
    {
      printf("%d ",num2);
    }
  }
  if (num3 > num2)
  {
    if (num3 > num1)
    {
      printf("%d ",num3);
    }
  }
  if (num1 < num2)
  {
    if (num1 < num3)
    {
      printf("%d ",num1);
    }
  }
  if (num2 < num1)
  {
    if (num2 < num3)
    {
      printf("%d ",num2);
    }
  }
  if (num3 < num2)
  {
    if (num3 < num1)
    {
      printf("%d ",num3);
    }
  }
 
  
