#include<stdio.h>
#include<stdlib.h>
float a, b,d;
int c,x=1;
int main()
{
	do{

	printf("Enter loan princial(-1 to end):");
	scanf("%f", &a);
	if (a == -1) break;
	printf("Enter interest rate:");
	scanf("%f", &b);
	printf("Enter term of the loan in days");
	scanf("%d", &c);
	d = (a*b*c) / 365;
	printf("the interest charge is $%.2f\n",d);
	
	} while (x==1);
	return 0;
}