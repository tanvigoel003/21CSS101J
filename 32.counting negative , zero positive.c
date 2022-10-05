#include <stdio.h>
main()
{
  int number , no_positive = 0 , no_zero = 0 , no_negative = 0;
  scanf("%d", &number);
  do
  { 
    if (number > 0)
      ++no_positive;
    else 
      if (number == 0)
        ++no_zero;
    else
      ++no_negative;
  }
  while( scanf("%d" , &number) ! = EOF ) ;
  printf("no. of positive numbers =%d\n" , no_positive);
  printf("no. of negative numbrs = %d\n" , no_negative);
  printf("no. of zeros = %d\n" , no_zero);
}
