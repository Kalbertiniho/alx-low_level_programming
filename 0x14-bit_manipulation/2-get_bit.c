#include "main.h"

/**
 * get_bit - The value of a bit at an index
 * To be returned
 * In a form of decimal number
 * @n: Search the number
 * @index: The bit index
 * Return: Value of the bit
 *
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);

}
