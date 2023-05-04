#include "main.h"

/**
 * flip_bits - Number of bits to be counted
 * in order to alter
 * The number to acquire
 * From one another
 * @n: The first number
 * @m: The second number
 * Return: Alter the bits
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);

}
