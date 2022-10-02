#include<stdio.h>
#include<conio.h>
void main()
{
  int x = 10 , y = 15 , temp;
  temp = x;
  x = y;
  y = temp;
  printf("X = %d and y =%d" , x , y );
  getch();
}
