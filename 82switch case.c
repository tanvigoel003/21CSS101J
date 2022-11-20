#include<stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int day;       // 1 - monday , 2 - tuesday , 3- wednesday and so on till 7 - sunday 
  printf("enter day : ");
  scanf("%d", &day);
  switch (day)
  {
    case 1 : printf("monday\n");
      break;
    case 2 : printf("tuesday\n");
      break;
    case 3 : printf("wednesday\n");
      break;
    case 4 : printf("thursday\n");
      break;
    case 5 : printf("friday\n");
      break;
    case 6 : printf("saturday\n");
      break;
    case 7 : printf("sunday\n");
      break;
      default : printf("this day does not exist\n");
  }
  }
  
