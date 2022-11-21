#include<stdio.h>
void main(void)
{
    int unit;
    float amount1, amount2, amount3, amount4;
    amount1 = amount2 = amount3 = amount4 = 0;
    amount1 = unit * 0.5;
    amount2 = amount1 + ((unit - 50) * 0.75);
    amount3 = amount2 + ((unit - 150) *1.2);
    amount4 = amount3 + ((unit - 250) *1.5);
    printf("unit consumed : ");
    scanf("%d",&unit);
    if (unit <= 50)
    {printf("bill is : %f\n",amount1);
        if(amount1 > 300)
        {printf("amount to be paid is %f\n" ,amount1 + (amount1 * 0.1));}
    }
    else if (unit > 50 && unit < 150)
    {printf("bill is %f\n",amount2);
    if(amount2 > 300)
        {printf("amount to be paid is %f\n" ,amount2 + (amount2 * 0.1));}
    }
    else if (unit >= 150 && unit < 250)
    {printf("bill is %f\n",amount3);}
    if(amount3 > 300)
        {printf("amount to be paid is %f\n" ,amount3 + (amount3 * 0.1));}
    else 
    {printf("bill is %f\n",amount4);}
    if(amount4 > 300)
        {printf("amount to be paid is %f\n" ,amount4 + (amount4 * 0.1));}
    
        
}
