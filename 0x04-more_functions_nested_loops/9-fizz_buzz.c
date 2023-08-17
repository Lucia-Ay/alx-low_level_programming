#include <stdio.h>
#include "main.h"

/**
 * main - prints 1 to 100 & checks if they are divisable by 3 or 5 or both
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 5 == 0 && !(num % 3 == 0)
			printf("Buzz");
		else if (num % 3 == 0 && !(num % 5 == 0)
			printf("Fizz");
		else
			printf("%d", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
