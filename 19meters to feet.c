#include <stdio.h>
int main()
{
  printf("Registration number = RA22110420110033\n");
  int meters; // value given by the user will be in integer 
  float feet; // value after conversion can be a floating type 
  pritf("enter the value for meters = ");
  scanf("%d" , &meters);
  feet = meters * 3.28084; // formula for conversion 
  printf("%d meters are equal to %.2f feet" , meters , feet); //.2f for the precision of the floating value to be printed 
  return 0;
}
