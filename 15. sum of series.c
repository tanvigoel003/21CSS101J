/* program to sum a series */
#include <studio.h>
int main()
{
  printf("registration number = RA2211042010033"\n);
  float x , x2 , x3 , x4 , x6 , x8 , x10 , sum ; //float is used for floating values of the series 
  scanf("%f" , &x ); // scanf is used for taking input from the user 
  printf("x =%f \n" , x) ; x2 = x*x ;x4 = x2*x2 / 24.0 ; x6 = x4*x2 / 30.0 ;x8 = x6*x2 / 56.0 ;x10 = x8*x2 / 90.0 ;
  sum = 1.0-0.5*x2 + x4 - x6 + x8 - x10;
  printf(" value of x = %f , sum =%f\n" , x , sum );
  return 0;
} /* End of main */
