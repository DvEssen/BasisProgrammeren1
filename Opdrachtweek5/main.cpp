#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13
int main(void)
{
	//6.19
	unsigned int frequency[SIZE] = { 0 };
	srand(time(NULL));

	for (unsigned int roll = 1; roll < 36000; ++roll)
	{
		size_t face1 = 1 + rand() % 6;
		size_t face2 = 1 + rand() % 6;
		size_t face = face1 + face2;
		++frequency[face];
	}

	for (size_t face = 1; face < SIZE; ++face)
	{
		printf("%4d%17d\n", face, frequency[face]);
	}

	//6.24

}