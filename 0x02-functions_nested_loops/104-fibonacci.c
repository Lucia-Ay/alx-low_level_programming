#include "main.h"
#include <stdio.h>

/**
 * numLength - returns the length of a string
 *
 * @num: function argument
 *
 * Return: length
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count, initial0s;
	unsigned long fib1 = 1, fib2 = 2, sum, max = 100000000;
	unsigned long fib1pt2 = 0, fib2pt2 = 0, sumpt2 = 0;

	for (count = 1; count < 99; count++)
	{
		if (fib1pt2 > 0)
			printf("%ld", fib1pt2);
		initial0s = numLength(max) - 1 - numLength(fib1);

		while (fib1pt2 > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%ld", fib1);

		sum = (fib1 + fib2) % max;
		sumpt2 = fib1pt2 + fib2pt2 + (fib1 + fib2) / max;
		fib1 = fib2;
		fib1pt2 = fib2pt2;
		fib2 = sum;
		fib2pt2 = sumpt2;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
