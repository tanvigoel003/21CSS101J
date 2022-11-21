#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int marks;
  printf("enter marks of student : ");
  scanf("%d",&marks);
  if (marks >= 50) 
  {
    printf("congratulations ! you are passed \n");
  }
  else 
  {
    printf("better try next time\n");
  }
}       
