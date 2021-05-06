//to display the sum of first n even numbers
#include<stdio.h>
int main()
{
	int n, i, s, a;
	
	s=0;
	a=2;
	printf("Enter a number:");
    scanf("%d", &n);
	for(i=1; i<=n; i=i+1)
	{
		s=s+a;
		a=a+2;
	}
	printf("\n The sum of first %d even numbers is : %d", n, s);

return 0;
}

