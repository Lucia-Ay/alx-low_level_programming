#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if true, else 0
*/

int _strcmp(char *s1, char *s2)
{
	int identical = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			identical = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}
	return (identical);
}
