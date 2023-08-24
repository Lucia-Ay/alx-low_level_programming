#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string
 * Return: encoded string
*/

char *leet(char *c)
{
	unsigned int i;
	char *cp = c;
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	int value[] = {4, 3, 0, 7, 1};

	while (*c)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*c == letter[i] || *c == letter[i] - 32)
				*c = value[i] + '0';
		}
		c++;
	}
	return (cp);
}
