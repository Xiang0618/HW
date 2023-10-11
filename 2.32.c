#include<stdio.h>
#include<stdlib.h>

int main()
{
	float weight, height, bmi;
	printf("input your weight(pounds) and height(inches)\n");
	scanf("%f%f", &weight,&height);

	bmi = (weight * 703) / (height*height);

	printf("your BMI is %f\n\n", bmi);

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	return 0;
}