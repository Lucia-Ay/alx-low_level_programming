#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: input for the size
 *
 * Return: 0 (success)
*/

void print_triangle(int size)
{
	int row, space, hash;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
				_putchar(' ');
			for (hash = 1; hash <= row; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
