#include<stdio.h>
int main()
{
  printf("registration number - RA2211042010033\n");
  int x = 1;
  switch(x)
  {
    case 1 :
    case 2 :
      printf("1 and 2\n");   //it will print till a break or default is reached 
      break;
    case 3:
    case 4:
      printf("3 and 4\n");
      break;
    default: printf("wrong choice !\n");
      break;
  }
  return 0;
}
