#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination input
 * @src: source input
 *
 * Return: pointer of dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
