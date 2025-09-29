#include <stdio.h>
int main(void)
{
int a,s,n;
printf("Enter Total sales of a person:\n ");
scanf("%d",&a);
if(a>50000)
{
n=16%a;
s=375+n;
printf("Total Monthly sale income of a person is %d",s);
}
else
if(a<50000&&a>40000)
{
n=14%a;
s=370+n;
printf("Total Monthly sale income of a person is %d",s);
}
else
if(a<40000&&a>30000)
{
n=12%a;
s=325+n;
printf("Total Monthly sale income of a person is %d",s);
}
else
if(a<30000&&a>20000)
{
n=9%a;
s=300+n;
printf("Total Monthly sale income of a person is %d",s);
}
else
if(a<20000&&a>10000)
{
n=5%a;
s=250+n;
printf("Total Monthly sale income of a person is %d",s);
}
return 0;
}

