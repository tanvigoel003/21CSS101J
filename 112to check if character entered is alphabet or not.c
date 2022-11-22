#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  char ch;
  printf("Enter any character : ",ch);
  scanf("%c",&ch);
  if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
  { 
    printf("Given character %c is an alphabet\n",ch);
  }
  else 
  {
    printf("Given character %c is not an alphabet\n",ch);
  }
}
