#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int marks;
  printf("enter marks from 1 to 100 : ");
  scanf("%d", &marks);
  if (marks < 30)
  {
    printf("you got c grade\n");
  }
  else if (marks >= 30 && marks < 70 ) 
  {
    printf("you got B grade \n");
  }
  else if (marks >= 70 && marks < 90) 
  {
    printf("you got A grade\n");
  }
  else if (marks >= 90 && marks < 101) 
  {
    printf("you got A+ grade \n");
  }
  else 
  {
    printf("invalid score\n");
  }
}
