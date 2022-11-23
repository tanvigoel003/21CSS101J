#include <stdio.h>
#define PI 3.14
void main(void)
{
  printf("registration number : RA2211042010033\n");
  float radius = 0.0f;
  float diameter = 0.0f;
  float circumference = 0.0f;
  float area = 0.0f;
  printf("Input the diameter of a circuluar table : ");
  scanf("%f",&diameter);
  radius = diameter / 2.0f;
  circumference = 2.0 * PI * radius;
  area = PI * radius * radius;
  printf(" the circumference is %.2f, and area is %.2f",circumference, area);
}
  
