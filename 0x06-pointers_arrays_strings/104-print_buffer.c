#include "main.h"
#include <stdio.h>

/**
 * isASCII - checks if n is ASCII character
 * @n: input
 * Return: 1 if true, else 0
*/

int isASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHex - prints hex values of string b
 * @b: string
 * @start: starting position
 * @end: ending position
 * Return: void
*/

void printHex(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + i + start));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printChar - prints ASCII values of b string
 * @b: string
 * @start: starting position
 * @end: ending position
 * Return: void
*/

void printChar(char *b, int start, int end)
{
	int c, i = 0;

	while (i < end)
	{
		c = *(b + i + start);
		if (!isASCII(c))
			c = '.';
		printf("%c", c);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: buffer size
 * Return: void
*/

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = size - start < 10 ? size - start : 10;
			printf("%08x: ", start);
			printHex(b, start, end);
			printChar(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
