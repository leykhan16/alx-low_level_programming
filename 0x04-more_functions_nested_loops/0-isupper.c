#include "holberton.h"

/**
 * _isupper - checks for upper case of a char
 * @c: char to be cheked
 *
 *
 *
 * Return: 1 if upper, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
