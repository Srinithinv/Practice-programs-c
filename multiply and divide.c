#include <stdio.h>
int main(void)
{
int a, b, div, mul;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
mul=a*b;
div=a/b;
printf("Multiplication of Two numbers: %d*%d=%d\n ",a,b,mul);
printf("Division of Two numbers:%d/%d=%d",a,b,div);
return 0;
}
