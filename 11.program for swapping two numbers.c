#include<stdio.h>
#include<conio.h>
void main()
{
  printf("Registration number = RA2211042010033"\n);
  int x = 10 , y = 15 , temp; // declaring the variables to be used 
  temp = x; // renaming the variables to replace the values 
  x = y;
  y = temp;
  printf("X = %d and y =%d" , x , y );
  getch();
}
