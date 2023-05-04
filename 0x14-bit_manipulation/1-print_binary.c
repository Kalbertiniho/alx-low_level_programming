#include "main.h"

/**
 * print_binary - Binary number to be printed
 * Which is equivalent to decimal number
 * @n: Print the number
 * In the form of binary
 *
 */

void print_binary(unsigned long int n)

{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)

	{
		current = n >> i;

		if (current & 1)

		{
			_putchar('1');
			count++;

		}

		else if (count)
			_putchar('0');

	}

	if (!count)
		_putchar('0');

}
