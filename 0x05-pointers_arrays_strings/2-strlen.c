#include "main.h"

/**
 * _strlen - checks a string length
 *
 * @s: string to be checked
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
