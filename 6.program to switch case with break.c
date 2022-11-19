#include<studio.h>
int main()
{
  printf("registration number - RA2211042010033\n");
  //Local Variable Definition 
  char grade;
  printf('Enter your grade :\n");
         scanf("%c", &grade);
         switch(grade)
         {
           case 'A':
           printf("Excellent\n");
           break;
           case 'B':
           printf("keep it up!\n\n");
           break;
           case'c':
           printf("well done \nbreak keyword takes execution to exit the switch case\n\n");
           break;
           case 'D':
           printf("you passed\n");
           break;
           case'F':
           printf('Better luck next time\n");
                  break;
                  default:
                  printf("Invalid grade\n");
                  }
                  printf("Your grade is %c\n" , grade);
                  return 0;
                  }
