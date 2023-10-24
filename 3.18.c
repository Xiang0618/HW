#include<stdio.h>
#include<stdlib.h>

float d, s;
int a = 1;
int main()
{
	do
	{
		printf("Enter sales in dollars(-1 to the end)");
		scanf("%f", &d);
		if (d == -1) break;
		s = 200 + d * 0.09;
		printf("Salary is: %.2f\n", s);
	} while (1);

	return 0;
}