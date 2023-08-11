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
	putchar('0');

	for (int i = 0; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
