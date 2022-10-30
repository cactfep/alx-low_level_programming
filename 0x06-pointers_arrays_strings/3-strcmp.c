#include "main.h"

/**
 * _strcmp - compares two strings in byte
 * @s1: first string
 * @s2: second string
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int r;

	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	r = s1[i] - s2[i];
	return (r);
}
