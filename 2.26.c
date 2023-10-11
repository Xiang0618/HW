#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	printf("input two numbers\n");
	scanf("%d%d",&a,&b);

	if((a%b)==0)	
		printf("%d is a multiple %d",a,b);

	else 
		printf("%d is not a multiple %d", a, b);

	return 0;
}