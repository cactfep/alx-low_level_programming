#include "main.h"

/**
 * print_times_table - prints the time table
 * @n: between 0 and 15
 * Return: nothing
 */

void print_times_table(int n)
{
	int a, b, output;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				output = a * b;
				_putchar(44);
				_putchar(32);
				if (output <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(output + 48);
				}
				else if (output <= 99)
				{
					_putchar(32);
					_putchar((output / 10) + 48);
					_putchar((output % 10) + 48);
				}
				else
				{
					_putchar(((output / 100) % 10) + 48);
					_putchar(((output / 10) % 10) + 48);
					_putchar((output % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

