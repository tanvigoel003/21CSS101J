#include <stdio.h>
main()
{
  int Fibonacci[12], i;
  Fibonacci[0] = 0; Fibonacci[1] = 1;
  for (i = 2; i <= 11; ++i)
    Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
  for (i = 0; i <= 11; ++i)
    printf("%d\n" , Fibonacci[i]);
}
