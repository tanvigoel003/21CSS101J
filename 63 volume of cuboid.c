#include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  int length , breadth , height;
  printf("enter length of cuboid : ");
  scanf("%d",&length);
  printf("enter breadth of cuboid : ");
  scanf("%d" ,&breadth);
  printf("enter height of cuboid : "); 
  scanf("%d",&height);
  int volume = length * breadth * height;
  printf("volume of cuboid is %d",volume);
}
  
         
