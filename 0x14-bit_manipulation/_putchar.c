#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write the char c
 * In order to stdout
 * @c: The char to print
 *
 * Return: On success 1;
 * Return -1, on error;
 * correctly set errno
 *
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
