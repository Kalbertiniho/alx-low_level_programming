#include "main.h"

/**
 * set_bit - The bit be set
 * At a specific index
 * to 1
 * @n: The number to be pointed
 * In order to alter
 * @index: The bit index
 * To set to 1
 * Return: If it is correct 1 to return
 * If it fails -1 to return
 *
 */

int set_bit(unsigned long int *n, unsigned int index)

{

	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);

}
