#include <stdio.h>
main()
{
  int stock[6][5], brand_code , watt_code , number ;
  while(scanf("%d %d %d", &brand_code , &watt_code, &number)
        ! = EOF)
    stock[brand_code][watt_code] += number;
}
