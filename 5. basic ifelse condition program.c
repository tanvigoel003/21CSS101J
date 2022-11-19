#include<stdio.h>
int main()
{
  printf("registration number - RA2211042010033\n");
  int number;
  printf(" Please enter a number :\n");
  scanf("%d" , &number) ; 
  if(number < 100)
    printf("number is 100!\n"); 
  else if (number ==100)
    printf("Number is 100!\n");
  else 
    prinf("Number is greater than 100!\n");
  return 0 ;
}
