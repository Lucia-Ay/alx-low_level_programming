#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: C program, prints a quote to the standard error
 *
 * Return: 1 [fail]
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
