#include<stdio.h>
int main()
{
  /*
  always declare the variable before using them 
  */
  printf("registration number : RA2211042010033\n");
  int i =0;  //declaration and initialisation at the same time
  for(i = 0; i < 10; i++)
  {
    printf("i=%d\n",i);
    /* consequently , when i equals 10 , the loop breaks. i is updated before the condition is checked- hence the value of i after exiting the loop is 10 
    */
  }
  printf("\n\The value of i after exiting the loop is %d\n\n" , i);
  printf("\nRemember that the loop condition checks the conditional statement before it loops again.\n\n");
  printf("Consequently , when i equal 10 , the loop breaks .\n\n");
  printf("i is updated before the condition is checked - hence the value of i after exiting the loop is 10 .\n\n");
  return 0;
}
