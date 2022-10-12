#include <stdio.h>
int main()
{
  printf("Registration number = RA22110420110033");
  float miles , kilometers;
  printf("enter distance in miles = 69");
  scanf("%f" ,&miles);
  kilometers = miles * 1.609;
  print("%.2f Miles are equal to %.2f kilometer" , miles ,kilometers);
        return 0;
}
