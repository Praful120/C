//to display some numbers within the given range
#include<stdio.h>

int main()
{
int i, j, k;

printf("Enter the lower limit and upper limit:\n");
//assigning the upper limit and lower limit to 'j' and 'k' respectively
scanf("%d %d", &j, &k);
//printing an empty line
printf("\n");


for(i=j; i<=k; i++)
{
    	printf("%d\n", i);
}
return 0;
}

