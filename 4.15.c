#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{
	double fv;
	float r=1.1;
	int j;
	
	for (j = 0; j < 5; j++) 
	{
	fv = 5000*pow(r, 15);
    printf("%lf\n",fv);
	r = r + 0.005;
	}
	
	
	return 0;
}
