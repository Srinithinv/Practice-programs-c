#include <stdio.h>
int main(void)
{
int a, b, c;
float s,area;
printf("Enter the values of a, b and c \n");
scanf("%d %d %d", &a, &b, &c);
s = (a + b + c) / 2;
area = sqrt(s * (s - a) * (s - b) * (s - c));
printf("Area of a triangle = %f \n", area);
return 0;
}
