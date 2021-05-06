//display wether the given number is prime or composite
/*
Prime numbers are numbers that have only 2 factors: 1 and themselves.
*/
#include<stdio.h>

int main()
{
	int n, factor, i;
	printf("Enter a number: \n");
	scanf("%d", &n);
	
	factor=0;
	
	for(i=1; i<=n; i=i+1)
	{
		if((n % i)==0)
		{
		factor=factor+1;
		
	    }
	}
	if(n==0)
	{
		printf("0 is neither prime nor composite");
    }
    else
	{
    	if(factor==2)
		{
    		printf("%d is prime number", n);
		}
		else
		{
	    	printf("%d is composite number", n);
		}
	}
	    
	
	
	
return 0;
}

