#include<stdio.h>
int main()
{
  /* Local Variable Definition */
  char grade;
  printf("Enter your grade :\n");
  scanf("%c" , &grade);
  switch(grade)
  {
    case 'A' :
      printf("Excellent\n");
      case'B' :
      printf("\n\n\nKeep it up !\n\nNo break statement\n\nHence all the casefollowing this) except the defaultcase will get executed !\n\n");
    case 'C' :
      printf("\n\n\t\tCase c : well done !\n\n");
    case 'D' :
      printf("\t\tCase D : You passed!\n\n");
    case 'F' :
      printf("\t\tCase E : Better luck next time\n\n\n');
             default:
             printf("\t\Default case : Invalid grade\n\n\n");
             }
             printf("Your grade is %c\n", grade);
             return 0; 
             }
