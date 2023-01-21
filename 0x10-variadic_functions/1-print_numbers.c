#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: pointer to constant separator
 * @n: start of input variables
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));

		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

