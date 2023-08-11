#include <stdio.h>

/**
 * main -entry point
 *
 * Description: Prints numbers of base 16 in lowecase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}