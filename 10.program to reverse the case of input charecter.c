#include <stdio,h>
#include<ctype.h> //to use system defined function islowerand toupper
int main()
{
  printf("Registration number = RA2211042010033")
  char alphabet;
  printf("Enter an alphabet : t");
  putchar('\n'); //to move to next line 
  alphabet = getchar();
  printf("\n\nReverse case of %c is T",alphabet);
  if(islower(alphabet));
  putchar(toupper(alphabet));
  else
    // must be an uppercase charecter
    printf("%c",tolower(alphabet));
  return 0;
}
