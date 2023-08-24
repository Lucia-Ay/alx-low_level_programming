#include "main.h"

/**
 * infinite_add - adds numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: result buffer
 * @size_r: size buffer
 *
 * Return: result pointer
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, large = 0, carry = 0;
	int digit1, digit2;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		large = i;
	else
		large = j;
	if (large + 1 > size_r)
		return (0);
	r[large] = '\0';
	for (k = large - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			digit1 = n1[i] - '0';
		else
			digit1 = 0;

		if (j >= 0)
			digit2 = n2[j] - '0';
		else
			digit2 = 0;
		r[k] = (digit1 + digit2 + carry) % 10 + '0';
		carry = (digit1 + digit2 + carry) / 10;
	}
	if (carry == 1)
	{
		r[large + 1] = '\0';
		if (large + 2 > size_r)
			return (0);
		while (large-- >= 0)
			r[large + 1] = r[large];
		r[0] = carry + '0';
	}
	return (r);
}
