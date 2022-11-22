#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int num1, num2, num3;
  printf("Enter three integers : ",num1,num2,num3);
  scanf("%d %d %d",&num1, &num2, &num3);
  printf("Sum of %d, %d and %d : %d\n", num1, num2, num3 , (num1 +num2 + num3) / 3);
}
