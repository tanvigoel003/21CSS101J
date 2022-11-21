#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  char ch ,ab;
  ch = 'A';
  printf("enter the last alphabet you want to print : ");
  scanf("%c",&ab);
  while ( ch <= ab){printf("%c",ch); ch ++;}
}
  
