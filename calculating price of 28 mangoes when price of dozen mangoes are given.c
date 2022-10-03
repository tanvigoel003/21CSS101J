/* This program calculates the price of 28 mangoes given the price of dozen mangoes */ 
#include <stdio.h>
main()
{ 
int rupees , paise , cost_of_28;
float  cost_dozen, rcost_28; 
/*read cost of 12 mangoes */
scanf("%f" , &cost_dozen);
printf("cost of dozen = %f\n", cost_dozen);
rcost_28 = ( ( cost_dozen * 100.0/120.0) * 28.0 + 0.5 ) ; 
cost_of_28 = rcost_28; 
rupees = cost_of_28/100;
paise = cost_of_28 % 100;
printf (" cost 28 mangoes \n") ; 
printf ( " Rs.%d ps.%d\n" , rupees , paise ) ; 
} /* End of main */
