#include <stdio.h>
main()
{
  int i, n;
  float x , a[20] , polynomial;
  scanf("%d %f , &n , &x);
        for (i = 0; i <= n ; ++i)
        scanf("%f", &a[i]);
        polynomial = a[n];
        for (i = n ; i >= 1; --i)
        polynomial = a[n];
        for (i = n; i >= 1; --i)
        polynomial = a[i-1] + x * polynomial;
        printf("x = %f, polynomial value = %f\n" , x, polynomial);
        }
