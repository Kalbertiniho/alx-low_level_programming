#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the string length.
 * @s: Measure the string.
 *
 * Return: The string length.
 *
 */
int find_strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += find_strlen(s + len);
}

return (len);
}