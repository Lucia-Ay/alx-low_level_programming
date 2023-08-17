#include "main.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Return: 0 (success)
*/

void more_numbers(void)
{
	int num, count, line;

	for (line = 1; line <= 10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + '0');
				num = count % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
