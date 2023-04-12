#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - memory allocated using malloc
 * @b: allocates number of bytes
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
