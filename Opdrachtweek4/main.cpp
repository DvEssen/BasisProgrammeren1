#include <stdio.h>
#include <math.h>

//5.9

int calculatecharges(int x);

int main(void)
{
	int car1, car2, car3;

	printf("Enter hours for car 1: \n");
	scanf_s("%d", &car1);
	printf("Enter hours for car 2: \n");
	scanf_s("%d", &car2);
	printf("Enter hours for car 3: \n");
	scanf_s("%d", &car3);
	printf("Car \t Hours \t Charge\n");
	printf("1 \t %d \t %d \n", car1, calculatecharges(car1));
	printf("2 \t %d \t %d \n", car2, calculatecharges(car2));
	printf("3 \t %d \t %d \n", car3, calculatecharges(car3));
	int totalhours = car1 + car2 + car3;
	int total = calculatecharges(totalhours);
	printf("TOTAL: \t %d \t %d", totalhours, total);


}

int calculatecharges(int x)
{

	int charge = 25.00 + 5 * (x - 7) + 0.5 * x;
	if (x >= 8)
	{
		if (charge >= 50 && x < 24)
		{
			return 50.00 + 0.5 * x;
		}
		if (x > 24) {
			return 100.00 + 0.5 * x;
		}
		if (x > 48) {
			return 150.00 + 0.5 * x;
		}
		return charge;
	}

	else
	{
		return 25.00 + 0.5 * x;
	}
}
