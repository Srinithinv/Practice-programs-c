#include <stdio.h>
int main(void)
{
char str[200];
printf("Enter your Address\n");
scanf("%[^\n]", &str);
printf("Your Address Is: %s", str);
return 0;
}
