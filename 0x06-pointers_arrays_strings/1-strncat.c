#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination input
 * @src: source input
 * @n: number of caracters from src
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
