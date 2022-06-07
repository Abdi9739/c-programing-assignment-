#include <stdio.h>
int main()
{
	int a;
	printf("enter a number to know if its divisible by 5/n");
	scanf("%d",&a);
	if(a%5==0)
    printf ("the number is divisible by 5");
    printf ("the number is not divisible by 5");
	return 0;
}