#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int product;
	double sum = 6.08, theDifference;
	float value;
	
	puts("hello world");
	puts("goodby\nworld");
	
	product = 2 * 16000;
	printf("The product of 2 and 16000 is %d\n",product);
	
	product -=26;
	printf("The product minus 26 is %d", product);
	
	printf("The product plus 1 is %d\n", ++product);
	printf("theDiffernce = %e\n", theDifference = sum);
	
	value = 3.1416f;
	sum = 4. + value;
	
	printf("Enter an integer and a floating point value:");
	scanf("%d %lf", &product, &sum);
	printf("You entered %d %f\n", product, sum);
	
	return(EXIT_SUCCESS);
	
}
