//to display whether the given number is even or odd
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	
	if(n==0){
		printf("0(zero) is neither even nor odd.");
	}
	else{
		/* '%' means modulus operator; it gives the remainder
		(n%2) gives the remainder when 'n' is divided by '2'  */
		if(n%2==0){
			printf("The given number, %d is even", n);
		}
		else{
			printf("The given number,%d is odd", n);
		}
	}
return 0;
}

