#include "main.h"

/**
 * _isalpha - checks: aphabetic character
 * @c: ASCII character
 * Return: 1 (Is letter)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
