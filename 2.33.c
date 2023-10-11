#include<stdio.h>
#include<stdlib.h>

int main()
{   
	float mile, gallon, km;
	int tolls,fee,total;

	printf("input total mlies driven per day\n");
	scanf("%f", &mile);
	printf("input cost per gallon of gasoline\n");
	scanf("%f",&gallon);
	printf("intput average miles per gallon\n");
	scanf("%f", &km);
	printf("input parking fees per day\n");
	scanf("%d",&fee);
	printf("input tolls per days\n");
	scanf("%d", &tolls);


	total = mile / km * gallon + fee + tolls;
	printf("Total cost of driving for one day=%d\n", total);
		
	return 0;
}