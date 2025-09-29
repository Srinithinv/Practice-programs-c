#include <stdio.h>
int main(void)
{
int r,h;
float pi=3.14,volume;
printf("Enter the Radius of a Cylinder:\n");
scanf("%d",&r);
printf("Enter the Height of a Cylinder:\n");
scanf("%d",&h);
volume=pi*(r*r)*h;
printf("Volume of a Cylinder is: %.2f\n",volume);
return 0;
}
