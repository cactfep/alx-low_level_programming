#include <stdio.h>

/**
 * main - print fibonacci
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;
	long int x, y, z;

	x = 1;
	y = 2;
	printf("%ld", "%ld", x, y);
	for (f = 0; f < 48; f++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf('\n');
	return (0);
}


