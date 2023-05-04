#include "main.h"

/**
 * clear_bit - The value of the specific bit
 * to be set to 0
 * @n: The number to be pointed
 * In order to alter
 * @index: Clear the bit index
 *
 * Return: if it is valid , print 1
 * if it fails ; -1 to print
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);

}

