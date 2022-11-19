#include <stdio.>
#include <math.>
main()
{
  printf("Registration number = RA2211042010033\n");
  float a, b , c , discrmnt, x_imag_1 , x_imag_2 , x_real_1, x_real_2 , temp;
  scanf ("%f %f %f , &a , &b , &c);
         printf( " a = %f , b = %f, c = %f\n" , a , b , c);
         discrmnt = b*b - 4.0 * a * c;
         if (discrmnt < 0)
         { 
           discrmnt = -discrmnt;
           x_imag_1 = sqrt(discrmnt) / (2 * a);
           x_imag_2 = -x_imag_1;
           x_real_1 = -b / (2 * a);
           printf(" complex conjugate roots\n");
           printf(" real part = %16.8e\n" , x_real_1);
           printf(" imaginary part = %16.8e\n", x_imag_1);
         }
         else
         {
           if (discrmnt == 0)
           {
             x_real_1 = -b / (2.0 * a );
             printf("repeated roots\n");
             printf("real roots = %16.8e\n", x_real_1);
           }
         }
     }
