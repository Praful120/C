//to display the area of the circle
/*
  like 'int', 'float' is also a data type,
  the values of int contain integers whereas,
  float has 7 decimal digits of precision(7 digits after the ' .'
  
  %d is used in 'int' and %f is used in 'float'
  while writng %f, if ".n" is written between % and f such as,
  %.nf, the value will be printed only upto n numbers after the ' . '
  (n=numbers) 
*/ 
#include<stdio.h>

int main()
{
	float r, A, pi=3.14;
	
	printf("Enter the radius of the circle:");
	scanf("%f", &r);
	A=pi*r*r;
	
	printf("The area of the circle with radius=%d is : %.2f units.", r, A);
	//%.2f means only 2 digits after ' .'
	
return 0;
}

