#include<stdio.h>
#include<stdlib.h>

int main() {
	double s;
	int code,hour,item;
	while(1){
	printf("Enter your work code:");
	scanf("%d", &code);
	if (code == 1) {
		printf("Enter Salary of manger:");
		scanf("%lf",&s);
		printf("Salary is %.2f\n\n", s);
	}

	else if (code == 2) {
		printf("Enter salary per hour :");
		scanf("%lf", &s);
		printf("Enter work hours of week :");
		scanf("%d", &hour);

		if (hour <= 40) 
			printf("Salary is %.2lf\n\n", s*hour);	
		else 
			printf("Salary is %.2lf\n\n", s*hour + (hour - 40)*(s / 2));	 
	}
	else if (code == 3) {
		printf("Enter total weekly sale :");
		scanf("%lf", &s);
		printf("Salary is %.2lf\n\n", 250.0 + s * 0.057);
	}
	else if (code == 4) {
		printf("Enter price per item :");
		scanf("%lf", &s);
		printf("Enter item count :");
		scanf("%d", &item);
		printf("Salary is %.2lf\n\n", s*item);
	}
	else return 0;
    }
	return 0;
}
