#include <stdio.h>
int main(void)
{
int A=50,B=60;
printf("Before interchanging the values are\n");
printf("A=%d\n",A);
printf("B=%d\n",B);
A=A+B;
B=A-B;
A=A-B;
printf("After interchanging the values are\n");
printf("A=%d\n",A);
printf("B=%d\n",B);
}
