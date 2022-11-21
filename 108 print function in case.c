#include<stdio.h>
void namaste(void);
void bonjour(void);
  void main(void)
{
  printf("registration number: RA2211042010033\n");
  printf("enter french (f) or indian (i) : \n");
  char ch;
    scanf("%c",&ch);
    if( ch == 'i')
    {
      namaste();
      }
    else if (ch == 'f')
    {
      bonjour();
      }
    else
    {
      printf("vadakam\n");
    }
    }
 void namaste(void)
{ 
   printf("namaste\n");
 }
void bonjour(void)
{  
  printf("bonjour\n");
}
