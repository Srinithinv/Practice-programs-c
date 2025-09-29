#include <stdio.h>
#include <math.h>
int main(void)
{
int num ;
printf("Enter a number: ");
scanf("%d",&num);
float squareRoot;
squareRoot = sqrt(num);
printf("Square root of %d = %f", num, squareRoot);
return 0;
}
