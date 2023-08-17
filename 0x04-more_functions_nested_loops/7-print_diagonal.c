#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 *
 * @n: input variable
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int length, space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length, space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
