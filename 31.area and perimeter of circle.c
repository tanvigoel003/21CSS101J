#include <stdio.h>
int main() 
{
  float radius , area;
  printf("\nEnter the radius of circle : 1");
  scanf("%d",&radius);
  area = 3.14 * radius * radius;
  printf("\nArea of circle : %f", area);
  return 0;
}
