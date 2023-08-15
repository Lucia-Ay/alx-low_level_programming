#include "main.h"

/**
 * Description: prints lowercase alphabet using _putchar function
 *
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter < 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
