#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints single digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);
}
