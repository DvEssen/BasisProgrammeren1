#include <stdio.h>

int main(void)
{
	//2.17
	/*int u;
	int a;
	int t;
	
	printf("Enter the initial velocity: \n");
	scanf_s("%d", &u);
	printf("Enter the acceleration: \n");
	scanf_s("%d", &a);
	printf("Enter the time that has elapsed: \n");
	scanf_s("%d", &t);
	
	int result1 = u + a * t;
	int result2 = u * t + .5 * a * (t * t);

	printf("final velocity is:");
	printf("%d \n", result1);
	printf("total distance traversed is:");
	printf("%d", result2);
	
	// 2.19
	
	printf("Enter 3 numbers: \n");
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c );
	
	int sum;
	sum = a + b + c;
	printf("sum is: %d\n", sum);
	int average; 
	average = sum / 3;
	printf("average is: %d\n", average);
	int product;
	product = a * b * c;
	printf("Product is: %d\n", product);
	int smallest;
	
	if (a < c && a < b) {
		printf("smallest is: %d\n", a);
	}
	if (b < c && b < a) {
		printf("smallest is: %d\n", b);
	}
	if (c < a && c < b)
	{
		printf("smallest is: %d\n", c);
	}

	if (a > b && a > c) {
		printf("largest is: %d\n", a);
	}

	if (b > a && b > c) {
		printf("largest is: %d\n", b);
	}

	if (c > a && c > b) {
		printf("largest is: %d\n", c);
	}
	

	int num1, num2;
	printf("Enter two numbers");
	scanf_s("%d %d", &num1, &num2);

	if (num1 % num2 == 0) {
		printf("the first number is a multiple of the second number");
	}
	else
	{
		printf("the first number is a multiple of the second number");
	}
	*/
	printf("number \t sqaure \tcube \n");
	printf(" % d\t % d\t % d\n", 0, 0 * 0, 0 * 0 * 0);
	printf(" % d\t % d\t % d\n", 1, 1 * 1, 1 * 1 * 1);
	printf(" % d\t % d\t % d\n", 2, 2 * 2, 2 * 2 * 2);
	printf(" % d\t % d\t % d\n", 3, 3 * 3, 3 * 3 * 3);
	printf(" % d\t % d\t % d\n", 4, 4 * 4, 4 * 4 * 4);
	printf(" % d\t % d\t % d\n", 5, 5 * 5, 5 * 5 * 5);
	printf(" % d\t % d\t % d\n", 6, 6 * 6, 6 * 6 * 6);
	printf(" % d\t % d\t % d\n", 7, 7 * 7, 7 * 7 * 7);
	printf(" % d\t % d\t % d\n", 8, 8 * 8, 8 * 8 * 8);
	printf(" % d\t % d\t % d\n", 9, 9 * 9, 9 * 9 * 9);
	printf(" % d\t % d\t % d\n", 10, 10 * 10, 10 * 10 * 10);
	return 0;
}