//to calculate and display simple interest
#include<stdio.h>

int main()
{
	float p, t, r, SI;
	
	printf("Enter the principle, rate and time:\n");
	scanf("%f	%f	%f", &p, &t, &r);
	
	//using the formula of simple interest and assigning the result value in SI
	SI=(p*t*r)/100;
	
	printf("The Simple Interest of the given data is : %.2f", SI);
	
return 0;
}

