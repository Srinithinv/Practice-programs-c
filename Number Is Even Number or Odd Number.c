#include <stdio.h>
int main(void)
{
int number;
printf ("Enter a number \n");
scanf("%d", &number);
if (number%2==0)
printf("%d is a Even number \n", number);
else
printf("%d is a odd number \n", number);
return 0;
}
