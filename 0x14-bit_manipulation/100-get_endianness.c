#include "main.h"

int get_endianness(void)
{
	char *yvar;
	int xvar = 1;

	yvar = (char *)&xvar;

	return (*yvar);
}
