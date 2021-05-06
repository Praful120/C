//to display factorial of any given number
/*
example: factorial of 2 = 1x2
         factorial of 5 = 1x2x3x4x5
*/
#include<stdio.h>
int main()
{
	int n, i, fact;
	
	printf("Enter a number:");
	scanf("%d", &n);
	fact=1;
	
	/*in the for loop below,
	  fact(1) is multiplied by i(=1) and it is again multiplied by i(=i+1)
	  until the value of 'i' is equal to the 'given number'(n)
	  and when the value of 'i' equals 'n', the final result is printed
	*/ 
	for(i=1; i<=n; i++)
	{
		fact=fact*i;	
	}
	printf("The factorial of %d is : %d\n", n, fact);
return 0;
}

