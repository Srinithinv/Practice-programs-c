#include <stdio.h>
int main(void)
{
int r;
float pi=3.14,area,cir;
printf("Enter the Radius of a Circle:\n");
scanf("%d",&r);
area=pi*r*r;
printf("Area of a Circle is: %f\n",area);
cir=2*pi*r;
printf("Circumference of a circle is: %f",cir);
return 0;
}
