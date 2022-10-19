#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: an integer
 * Return: 1 (Is positive), 0 (If zero), -1 (Is negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
