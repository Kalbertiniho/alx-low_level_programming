#include "main.h"

/**
 * get_endianness - Certify size of the machine
 * Whether it is big or small
 * Return: If it is small print 1
 * 0 if it is big
 *
 */

int get_endianness(void)

{

	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);

}
