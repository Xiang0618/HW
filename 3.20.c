#include<stdio.h>
#include<stdlib.h>

int a,x=1;
float b, c;
int main() 
{
	do
	{
	printf("Enter hours worked(-1 to end):");
	scanf("%d", &a);
	if (a == -1) break;
	printf("Enter hourly rate of the worker:");
	scanf("%f", &b);
	if (a <= 40)
	{
		c = a * b;
		printf("Salary is $%.2f\n", c);
	}
	else
	{
		c = b * a + 0.5*b*(a - 40);
		printf("Salary is $%.2f\n", c);
	}
	} while (x == 1);
	return 0;
}