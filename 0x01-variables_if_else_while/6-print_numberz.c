#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints single digits using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
		num++;
	}

	putchar("\n");
	return (0);
}
