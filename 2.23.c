#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int a, b, c;
	
	printf("input three number\n" );
	scanf("%d%d%d",&a,&b,&c);

	if ((a > b) && (a > c))
	{ 
		printf("largest=%d\n",a);

		if (b > c)
			printf("smallest = %d",c);
		else
			printf("smallest = %d",b);		
	}

    else if ((b > a) && (b > c))
	{
		printf("largest=%d\n", b);

		if (a > c)
			printf("smallest = %d", c);
		else
			printf("smallest = %d", a);
	}
	else if ((c > a) && (c > b))
	{
		printf("largest=%d\n", c);

		if (a > b)
			printf("smallest = %d", b);
		else
			printf("smallest = %d", a);
	}
	else if (a == b) 
	{
		if (a > c) 
		{
		printf("largest=%d\n", a);
		printf("smallest=%d", c);
		}
		
		else 
		{
		printf("largest=%d\n", c);
		printf("smallest=%d", a);
		}		
	}

	else if (a == c)
	{
		if (a > b)
		{
			printf("largest=%d\n", a);
			printf("smallest=%d", b);
		}

		else
		{
			printf("largest=%d\n", b);
			printf("smallest=%d", a);
		}
	}

	else if (c == b)
	{
		if (c > a)
		{
			printf("largest=%d\n", c);
			printf("smallest=%d", a);
		}

		else
		{
			printf("largest=%d\n", a);
			printf("smallest=%d", c);
		}
	}
	return 0;
}