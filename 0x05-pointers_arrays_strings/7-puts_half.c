#include "main.h"

/**
 * puts_half - prints half a string
 *
 * @str: string
 *
 * Return: half of string
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	if (i % 2 != 0)
		i++;

	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
