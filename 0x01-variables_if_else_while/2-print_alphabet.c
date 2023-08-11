#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
