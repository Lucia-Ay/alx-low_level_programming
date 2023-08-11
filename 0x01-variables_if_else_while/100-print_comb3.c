#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i > 0 || j > 1)
			{
				putchar(',');
				putchar(' ');
			}

			putchar(i + '0');
			putchar(j + '0');
		}
	}

	putchar('\n');
	return (0);
}
