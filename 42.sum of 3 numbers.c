#include <stdio.h>
int num1,num2,num3;         /* declaration of three variables */  
int sum;
char line_text[50];      /* line of input from keyboard */ 
int main() 
{  
	printf("registration number = RA2211042010033\n");
  printf("Input three numbers separated by comma : 5, 10, 15"); 
  fgets(line_text, sizeof(line_text), stdin);
  sscanf(line_text, "%d, %d, %d", &num1, &num2, &num3);
  sum = num1+num2+num3; 
  printf("The sum of three numbers : %d\n", sum);  
  return(0);  
}  
