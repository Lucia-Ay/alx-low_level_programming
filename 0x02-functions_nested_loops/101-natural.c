#include "main.h"
#include <stdio.h>

/**
 * main - computes the sum of the multiples of 3 or 5 till 1024
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
