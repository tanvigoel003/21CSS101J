#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int age;
  printf("enter age : ");
  scanf("%d",&age);
  if (0 < age && age < 13)
  {
    printf("the person is a child\n");
  }
  else if (12 < age && age < 20)
  {
    printf("the person is a teenager\n");
  }
  else if (19 < age && age < 30)
  {
    printf("the person is youth\n");
  }
  else 
  {
    printf("the person is old\n");
  }
}
