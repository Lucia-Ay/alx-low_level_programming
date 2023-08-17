#include "main.h"

/**
 * _isdigit - checks if c is a digit between 0 - 9
 *
 * @c: function argument
 *
 * Return: 1 if digit is between the range, else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
		return (1);
	else
		return (0);
}
