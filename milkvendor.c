#include <stdio.h>
int main(void)
{
int milk_buy,Water_add,buy_cost,sale_cost;
float gain,sum;
printf("How Many Liters Milk vendor Buy: \n");
scanf("%d",&milk_buy);
if(milk_buy>=4)
{
sum= milk_buy/4;
Water_add=milk_buy+sum;
}
buy_cost = milk_buy * 3.25;
sale_cost = Water_add * 4.15;
gain = sale_cost-buy_cost;
printf("\nGain of Milk Vendor %.2f rupees", gain);
return 0;
}

