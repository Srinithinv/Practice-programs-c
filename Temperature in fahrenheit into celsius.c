#include <stdio.h>
int main(void)
{
int f;
float a,g;
printf("Enter Temperature in fahrenheit\n");
scanf("%d",&f);
a=f-32;
g=(5*a)/9;
printf( "Temperature in degree celsius =%f ",g);
}
