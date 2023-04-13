#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int count;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	count = ~(1 << index);
	*n = *n & count;

	return (1);
}
