#include "main.h"

/**
 * main - prints _putchar
 * Description: print _putchar
 * Return: Always 0 (Suces)
 */

int main(void)
{
	char text[9] - "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
