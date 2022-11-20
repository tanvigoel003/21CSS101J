#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  char ch;
  printf("enter alphabet : ");
  scanf("%c",&ch);
  if (ch >= 'A' && ch <= 'Z') { printf("THE ALPHABET IS IN UPPERCASE\n");}
  else if (ch >= 'a' && ch <= 'z') {printf("the alphabet is in lowercase\n");}
  else {printf("it is not an alphabet\n");}
}
