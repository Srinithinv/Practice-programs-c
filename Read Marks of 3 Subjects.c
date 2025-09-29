#include <stdio.h>
int main(void)
{
int total, eng, maths, science;
float average;
printf("Enter the values of 3subjects english , maths, science \n");
scanf("%d %d %d", &eng, &maths, &science);
total =(eng + maths + science);
average=total/3;
printf("Total of the 3subjects= %d \n", total);
printf("Average of the 3subjects = %f \n", average);
return 0;
}
