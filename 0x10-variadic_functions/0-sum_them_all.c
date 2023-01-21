#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to function
 * Return: if n == 0, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	va_start(ap, n);

	for (param = 0; param < n; param++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
