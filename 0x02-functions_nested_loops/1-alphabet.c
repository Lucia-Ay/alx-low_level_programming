#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet using _putchar function
 *
 * Return: void
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
