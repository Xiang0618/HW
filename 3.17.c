#include <stdio.h>
#include <stdlib.h>

float a, b, c, d, e;
int n,x;

int main()
{
	do
	{
		printf("Enter accout number(-1 to end): ");
		scanf("%d", &n);
		if (n == -1) break;
		printf("Enter beginning balance: ");
		scanf("%f", &a);
		printf("Enter total charges: ");
		scanf("%f", &b);
		printf("Enter total credits: ");
		scanf("%f", &c);
		printf("Enter credit limit: ");
		scanf("%f", &e);

		d = a + b - c;

		if (d > e)
		{
			printf("account:     %d\n", n);
			printf("Credit limit:%7.2f\n", e);
			printf("balance:     %7.2f\n", d);
			printf("Credit limit exceeded.\n");
		}
		printf("\n");
	} while (n !=-1);
	return 0;
}