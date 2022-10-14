#include <stdio.h>
main()
{
  printf("Registration number = RA2211042010033"\n);
  int mat[5][4], i , j ;
  for (i = 1; i <= 4; ++i)
    for (j = 1; j <= 3; ++j)
      scanf("%d" , &mat[i][j]);
  printf("stored matrix is printed below\n");
  j = 1;
  for (i = 1; i <= 4; ++i)
    printf("%5d %5d %5d\n",
           mat[i][j] , mat[i][j+1] , mat[i][j+2]);
}
