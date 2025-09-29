#include <stdio.h>
int main(void)
{
int number1,number2;
printf("Enter Two numbers \n");
scanf("%d%d", &number1,&number2);
if (number1< number2)
printf("%d is a small number\n", number1);
else
printf("%d is a small number\n", number2);
return 0;
}
