#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: function argument
*/

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 1; length <= n; length++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
