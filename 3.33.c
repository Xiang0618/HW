#include<stdio.h>
#include<stdlib.h>
int i, j,a;
int main()
{
	printf("Enter length and breadth:");
	scanf("%d %d", &i, &j);
	for(a=0;a<i;a++)
		printf("+");
	printf("\n");

	j = j - 2;
	while(j!=0)
	{	
	for(a=0;a<i;a++)
	 {
	if ((a==0) || (a==i-2))
		printf("+");
	if ((a != 0) || (a != i-2))
		printf(" ");
     }
	printf("\n");
	j = j - 1;
	}
	for (a = 0; a < i; a++)
		printf("+");
	return 0;
}