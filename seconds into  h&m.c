#include <stdio.h>
int main(void)
{
int s,h,m;
printf("Enter number of seconds\n");
scanf("%d",&s);
h=s/3600; //Converts seconds into hours
m=s/60; //Converts seconds into minutes
printf("%d seconds = %d hour \n",s,h);
printf("%d seconds = %d minutes",s,m);
}
