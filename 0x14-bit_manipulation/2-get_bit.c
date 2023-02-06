#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 0r 1,
 *	or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bin = n >> index;

	bit = bin & 1;

	return(bit);
}
