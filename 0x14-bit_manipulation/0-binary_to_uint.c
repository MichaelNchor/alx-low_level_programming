#include "main.h"

/**
 * Write a function that converts a binary numberber to an unsigned int.
 *
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted numberber, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
	{
		number <<= 1;
		if (b[length] == '1')
			number += 1;
	}
	return (number);
}
