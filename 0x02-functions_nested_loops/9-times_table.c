#include "main.h"

/**
 * times_table - prints 9 times table
*/

void times_table(void)
{
	int n, mult, prod;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (mult = 1; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = n * mult;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
