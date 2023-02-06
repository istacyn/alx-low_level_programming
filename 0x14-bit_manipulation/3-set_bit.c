#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number
 * @index: index within binary number
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num  = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num <<= index;

	*n = *n | num;
	return (1);
}
