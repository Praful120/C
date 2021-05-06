//to display multiplication table(upto 10) of a given number
#include<stdio.h>

int main()
{
	int n, i, factor, mult;
	
	printf("Enter the number of which the multiplication table you want to display: \n");
	scanf("%d", &n);
	
	printf("---\n");
	
	/* inside the for loop below, the given number is first multiplied by 1 and 
	   the value is printed and again multiplied by 2 and so on */
	for( i=1; i<=10; i=i+1)
	{
		mult=n*i;
		printf("%d \n", mult);
	
	}
	
return 0;
}

