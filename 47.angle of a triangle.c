#include <stdio.h>
int main()  
{  
    int ang1, ang2, ang3; /*are three angles of a triangle  */
  ang1 = 50, ang2 = 70;
  
    /* Read two angles of the triangle from user separated by comma*/  
    printf("Input two angles of triangle separated by comma : ");  
    scanf("%d, %d", &ang1, &ang2);  
  
     ang3 = 180 - (ang1 + ang2);  /* Calculates the third angle  */
  
    printf("Third angle of the triangle :  %d\n", ang3);  
  
    return 0;  
}  
