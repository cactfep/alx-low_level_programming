#include "main.h"

/**
 * leet - encode
 * @s: pointer
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char l[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == (l[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
