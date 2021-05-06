//to display area of rectangle
#include<stdio.h>
int main()
{
	int l, b, A;
	
	printf("Enter the length and breadth of the rectangle:\n");
	//assigning the value of length and breadth in "l" and "b" respectively
    scanf("%d	%d", &l, &b);
    
    //multiplying length and breadth and assigning the result value in "A"
    A=l*b;
    printf("\n");
    printf("The area of the given rectangle with length = %d units and breadth = %d units is : %d units", l, b, A);
    
return 0;
}

