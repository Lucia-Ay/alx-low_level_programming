#include <stdio.h>

/**
 * main -entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i > 0 || j > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
		}
	}

	putchar('\n');
	return (0);
}
