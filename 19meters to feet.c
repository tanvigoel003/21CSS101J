#include <stdio.h>
int main()
{
  printf("Registration number = RA22110420110033"\n);
  int meters;
  float feet;
  pritf("enter the value for meters = 50");
  scanf("%d" , &meters);
  feet = meters * 3.28084; 
  printf("%d meters are equal to %.2f feet" , meters , feet);
  return 0;
}
