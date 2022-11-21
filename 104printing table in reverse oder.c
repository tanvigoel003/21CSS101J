#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int number;
  printf("enter the number whose table you want to print : ");
  scanf("%d",&number);
  printf("Table of %d is :-\n",number);
  for (int multiple = 10; multiple > 0 ; multiple --)
  {
    int product = number * multiple ;
    printf("%d x %d = %d\n ", number, multiple , product);
  }
}
