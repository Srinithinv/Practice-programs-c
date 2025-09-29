#include <stdio.h>
int main()
{
int number,l,f,m,s;;
printf("Enter Numbers :\n");
scanf("%d",&number);
{
l = number%10;
f = number/100;
m = (number/10)%10;
s = l+f;
}
if(s==m)
{
printf( "Sum of number equal to middle number");
}
else
{
printf( "Sum of number not equal to middle number");
}
}
