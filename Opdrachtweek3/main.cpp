#include <stdio.h>
#include <math.h>
int main(void)
{
	//4.9
	
	int num,n,i;
	int sum = 0;
;
	float avg;
	printf("Enter number of values to be entered:");
	scanf_s("%d", &n);
	
	for (i = 1; i <= n; i++)
	{ 
		printf("Enter number");
		scanf_s("%d",&num);
		sum = sum + num;
	}
	avg = sum / n;

	printf("Sum is: %d\n",sum);
	printf("Average is: %f", avg);
	
	//4.14

	
	int i;
	int fact = 1;
	printf("Number\tFactorial\n");
	for (i = 1; i <= 20; i++) {
		fact = fact * i;
		printf("%d \t %d \n", i, fact);
	}
	
	//4.16
	for (int  i = 1; i <= 10; i++)
	{
		for  (int j= 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
		 
	for (int  i = 10; i >= 1; i--)
	{
		for  (int j= 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 10; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
	}
	printf("\n");

	for (int i = 1; i <= 10; i++)
	{
		for (int k = 10; k >= i; k--)
		{
			printf(" ");
		}
		
		for (int j = 1; j <= i; j++)
		{
		printf("*");
		}
		
		printf("\n");
	}


}
