#include <stdio.h>
int main(void)
{
int a,b,c;
printf("Enter the lengths of 3 sides of triangles\n");
scanf("%d%d%d",&a,&b,&c);
if((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (c*c)+(a*a)==(b*b))
{
printf("Right angled triangle\n");
}
else
if((a==b) && (b==c))
{
printf("Equilateral triangle\n");
}
else
if((a==b) || (b==c) || (c==a))
{
printf("Isosceles triangle\n");
}
else
if((a!=b && b!=c && c!=a))
{
printf("Scalene triangle\n");
}
return 0;
}

