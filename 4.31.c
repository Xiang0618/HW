#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, k;

	for (i = 1; i <= 5; i++) {
		if (i == 5)
		{
			for (j = 1; j <=9; j++)
				printf("*");
		}
		else
		{
			for (j = 5; j >= i + 1; j--)
				printf(" ");
			for (j = 1; j <= 2*i - 1;j++)
				printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= 4; i++) {
				
			for (j = 1; j <= i; j++)
				printf(" ");
			for (j = 7; j >= 2 * i - 1; j--)
				printf("*");
		
		printf("\n");
	}
	return 0;
}