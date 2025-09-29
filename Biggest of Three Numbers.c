#include <stdio.h>
int main(void)
{
int number1,number2,number3;
printf("Enter three numbers \n");
scanf("%d%d%d", &number1,&number2,&number3);
if (number1>number2&&number1>number3)
printf("%d is a Big number\n", number1);
else
if (number2>number1&&number2>number3)
printf("%d is a Big number\n", number2);
else
if (number3>number1&&number3>number2)
printf("%d is a Big number\n", number3);
return 0;
}
