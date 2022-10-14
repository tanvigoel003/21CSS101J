#include <stdio.h>
main()
{
  printf("registration number = RA2211042010033");
  int stock[6][5], brand_code , watt_code , number ;
  while(scanf("%d %d %d", &brand_code , &watt_code, &number)
        ! = EOF)
    stock[brand_code][watt_code] += number;
}
