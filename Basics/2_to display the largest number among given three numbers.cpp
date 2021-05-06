//to display the largest number among given three numbers
#include<stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter the first number:");
    scanf("%d", &a);
    
    printf("Enter the second number:");
    scanf("%d", &b);
    
    printf("Enter the third number:");
    scanf("%d", &c);
    
    /* the lines 7 to 14 can also be written as follow:
	printf("Enter three different numbers: ");
    scanf("%d	%d	%d", &a, &b, &c); */
    
    printf("\n\n");
    
    if(a>b && a>c){
    	printf("%d is the greatest number among the given three numbers.", a);
	}
	if(b>a && b>c){
    	printf("%d is the greatest number among the given three numbers.", b);
	}
	else{
    	printf("%d is the greatest number among the given three numbers.", c);
	}

return 0;
}

