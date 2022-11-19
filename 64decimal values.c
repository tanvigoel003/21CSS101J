include <stdio.h>
void main(void)
{
  printf("registration number : RA2211042010033\n");
  float length , breadth , height;
  printf("enter length of cuboid : ");
  scanf("%f",&length);
  printf("enter breadth of cuboid : ");
  scanf("%f" ,&breadth);
  printf("enter height of cuboid : "); 
  scanf("%f",&height);
  printf("volume of cuboid is %f" , length * breadth * height);
}
