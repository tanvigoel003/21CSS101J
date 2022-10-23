#include <stdio.h>
int main()
{
  printf("Registration number = RA22110420110033"\n);
  float miles , kilometers; // floating values can come whi,e conversion 
  printf("enter distance in miles = ");
  scanf("%f" ,&miles);
  kilometers = miles * 1.609; // formula for conversion 
  print("%.2f Miles are equal to %.2f kilometer" , miles ,kilometers); //.2f is used to print 2 floating values 
        return 0;
}
