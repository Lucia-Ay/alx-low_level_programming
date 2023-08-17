#include "main.h"

/**
 * print_traingle - prints a traingle
 *
 * @size: input for the size
 *
 * Return: 0 (success)
*/

void print_traingle(int size)
{
	int h, b;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
		}
	}
	else
		_putchar('\n');
}
