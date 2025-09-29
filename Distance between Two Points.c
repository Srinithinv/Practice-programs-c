#include <stdio.h>
#include <math.h>
int main(void)
{
int x1,x2,y1,y2;
int x,y;
float distance;
printf("Enter X and Y coordinates of first point\n");
scanf("%d %d",&x1,&y1);
printf("Enter X and Y coordinates of Second point\n");
scanf("%d %d",&x2,&y2);
x=x2-x1;
y=y2-y1;
distance=sqrt((x*x)+(y*y));
printf("Distance: %.2f\n",distance);
return 0;
}
