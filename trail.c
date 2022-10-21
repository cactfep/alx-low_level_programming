#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	for (i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		else
		{
			break;
		}
		printf("here am I %d", i);
	}
	printf("loop ended at %d", i);
}
