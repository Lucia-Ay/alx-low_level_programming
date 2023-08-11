#include <stdio.h>

/**
 * main - Entry point
 *
 * description: C program prints both lower and uppercase alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	/* lowercase */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/* UPPERCASE */
	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}

	putchar('\n');
	return (0);
}
