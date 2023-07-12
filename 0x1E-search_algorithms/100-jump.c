#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located.
 * -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, prev, step;

	step = sqrt(size);

	if (array)
	{
		start = prev = 0;
		while (prev < size && array[prev] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
			start = prev;
			prev += step;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", start, prev);
		while (start <= ((prev < size - 1) ? prev : size - 1))
		{
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
			if (array[start] == value)
				return (start);
			start++;
		}
	}

	return (-1);
}
