#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int between, chk;
	unsigned int num, i;

	chk = 1;
	between = n ^ m;
	num = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (chk == (between & chk))
			num++;
		chk <<= 1;
	}
	return (num);
}
