#include "main.h"

/**
 * Write a function that sets the value of a bit to 1 at a given index.
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setvar;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setvar = 1 << index;
	*n = *n | setvar;

	return (1);
}
