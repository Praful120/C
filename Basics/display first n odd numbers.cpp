//to display first n odd numbers
#include<stdio.h>
int main()
{
	int n, i, a=1;
	
	printf("Enter a number:");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
	{
    	printf("%d\n", a);
    	//adding 2 after printing the first odd number
		a=a+2;
	}
	
return 0;
}

