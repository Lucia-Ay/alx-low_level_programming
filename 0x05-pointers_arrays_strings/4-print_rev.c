#include "main.h"

/**
 * print_rev - prints a reversed string
 *
 * @s: string
 *
 * Return: reversed string
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
