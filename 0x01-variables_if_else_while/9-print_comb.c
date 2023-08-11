#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i > 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
