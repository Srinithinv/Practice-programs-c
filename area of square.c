#include <stdio.h>
int main(void)
{
int r;
float pi=3.14,area;
printf("Enter the Radius of a sphere:\n",r);
scanf("%d",&r);
area = 4*pi*(r*r);
printf("Area of a sphere is: %f\n",area);
return 0;
}
