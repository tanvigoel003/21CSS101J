#include<studio.h>
{
  printf("\n\n\t\tStudytonight - best place to learn\n\n\n");
  int number;
  printf(" Please enter a number :\n");
  scanf("%d" , &number) ; 
  /* 
  For single statements we can skip the curly brackets
  */
  if(number < 100)
    printf("number is 100!\n"); 
  else if (number ==100)
    printf("Number is 100!\n");
  else 
    prinf("Number is greater than 100!\n");
  return 0 ;
}
