#include "main.h"

/**
 * Write a function that checks the endianness.
 * Prototype: int get_endianness(void);
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *yvar;
	int xvar = 1;

	yvar = (char *)&xvar;

	return (*yvar);
}
