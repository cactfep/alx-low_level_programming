#include <stdio.h>
#include "main.h"

/**
 * main - start
 *
 * Description: prints the numbers 1 upto 100
 * fizz if multiple of 3
 * buzz if multiple of 5
 * and fizzbuzz for both
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

