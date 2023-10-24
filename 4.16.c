#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,k;

	for (j = 1; j <= 10; j++) {
          for (i = 1; i <= j; i++)
	      {
		  printf("*");
	      }
		  printf("\n");
	}
	printf("\n");

	for (j = 1; j <= 10; j++) {
		for (i = 10; i >= j; i--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for(i=1;i<=10;i++)
	{
		if (i == 1) {
		for(j=1;j<=10;j++)
         printf("*");
		}
		
		else {
			for (k = 1; k<= i-1; k++) {
				printf(" ");
			}
			for (k = 10 - i + 1; k >= 1; k--)
				printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		if (i == 10) {
			for (j = 1; j <= 10; j++)
				printf("*");
		}

		else {
			for (k = 10; k >= i+1; k--) {
				printf(" ");
			}
			for (k = 1; k <= i; k++)
				printf("*");
		}
		printf("\n");
	}
	printf("\n");

  return 0;
}