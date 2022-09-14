#include <stdio.h>

int main(void)
{
//2.19
	/*
	float interest;
	float principal;
	float rate;
	float days;

	printf("Enter loan principal: (-1 to end)\n");
	scanf_s("%f", &principal);
	while (principal != -1)
	{
		printf("Enter interest rate:\n");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in day:\n");
		scanf_s("%f", &days);
		interest = principal * rate * days / 365;
		printf("%.2f\n", interest);
	}
	
	//2.21
	printf("the number is 10");
	int a = 10;
	int b = 10;
	printf("postincrementing: \n");
	printf("%d\n", a);
	printf("%d\n", a++);
	printf("%d\n", a);
	
	printf("preincrementing: \n");
	printf("%d\n", b);
	printf("%d\n", ++b);
	printf("%d\n", b);
	*/
	int number;
	int i;
	printf("Enter:");
	scanf_s("%d", &number);
	    for(i = 2; i <= number/2; i++)
    {
			if (number % i == 0) {
				printf("Number is prime:");
	   }
          
			else {
				printf("number is NOt prime");
			}
    }  


	return 0;
}