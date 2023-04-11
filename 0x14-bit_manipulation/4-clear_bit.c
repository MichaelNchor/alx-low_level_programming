#include "main.h"

/** Write a function that sets the value of a bit to 0 at a given index.
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	count = ~(1 << index);
	*n = *n & count;

	return (1);
}
