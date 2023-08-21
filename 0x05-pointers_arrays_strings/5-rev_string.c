#include "main.h"

/**
 * rev_string - revesrses a string
 *
 * @s: string
 *
 * Return: reversed string
*/

void rev_string(char *s)
{
	int i, length;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
