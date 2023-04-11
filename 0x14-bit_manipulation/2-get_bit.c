#include "main.h"

/**
 * Write a function that returns the value of a bit at a given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to get
 * Returns: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
