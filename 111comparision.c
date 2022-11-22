#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
int num1, num2, num3; 
printf("Enter 3 integers : ",num1, num2, num3);
  scanf("%d %d %d",&num1, &num2, &num3);
  if (num1 > num2 && num1 > num3)
  {
    printf("%d is largest\n",num1);
  }
  else if (num2 > num3 && num2 > num3)
  {
    printf("%d is largest\n",num2);
  }
  else 
  {
    printf("%d is largest\n",num3);
  }
  if (num1 < num2 && num1 < num3)
  {
    printf("%d is smallest\n",num1);
  }
  else if (num2 < num3 && num2 < num3)
  {
    printf("%d is smallest\n",num2);
  }
  else 
  {
    printf("%d is smallest\n",num3);
  }
}
