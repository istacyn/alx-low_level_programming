#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index within binary number
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	num = ~(num << index);

	*n = *n & num;


	return (1);
}
