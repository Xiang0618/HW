#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("input a number\n");
	scanf("%d",&a);

	if ((a % 2) == 0) 
	printf("%d is even", a);
	else
	printf("%d is odd", a);

	return 0;
}