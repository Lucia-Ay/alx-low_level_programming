#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints letters except for e & q
 *
 * Return: 0 (success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			letter++;
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
