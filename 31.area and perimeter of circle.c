#include <stdio.h>
int main() 
{
  printf("registration number = RA2211042010033");
  float radius , area; // float is used because the values can have foating points  
  printf("Enter the radius of circle : ");
  scanf("%d",&radius); // take the value of radius value from the user 
  area = 3.14 * radius * radius; // define value of pi in begiening to write pi instead of 3.14 in the formula 
  printf("Area of circle : %f", area);
  return 0;
}
