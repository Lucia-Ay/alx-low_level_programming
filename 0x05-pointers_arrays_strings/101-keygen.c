#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: 0 (Success)
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 127 + 1;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
