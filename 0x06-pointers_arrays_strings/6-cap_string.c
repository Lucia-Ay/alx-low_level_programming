#include "main.h"
#include <stdio.h>

/**
 * isLowercase - checks if c is lowercase
 * @c: character
 * Return: 1 if true, else 0
*/

int isLowercase(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - checks if c is a delimeter
 * @c: charcter
 * Return: 1 if true, else 0
*/

int isDelimiter(char c)
{
	char D[] = "\t\n ,;.!?\"(){}";
	int i;

	for (i = 0; i < 13; i++)
		if (c == D[i])
			return (1);
	return (0);
}

/**
 * *cap_string - capitalizes words in a string
 * @s: string
 * Return: string with capital words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int delimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			delimiter = 1;
		else if (isLowercase(*s) && delimiter)
		{
			*s -= 32;
			delimiter = 0;
		}
		else
			delimiter = 0;
		s++;
	}
	return (ptr);
}
