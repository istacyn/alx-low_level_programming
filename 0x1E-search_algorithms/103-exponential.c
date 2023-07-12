#include "search_algos.h"

/**
 * print_array - Function to print array.
 * @array: The array to print
 * @first: The first index.
 * @last: The last index.
 *
 * Return: nothing
 */
void print_array(int *array, size_t first, size_t last)
{
	printf("Searching in array: ");
	while (first <= last)
	{
		printf("%d", array[first]);
		if (first < last)
			printf(", ");
		first++;
	}
	printf("\n");
}

/**
 * binary_search_helper - Perform binary search in sorted array.
 * @array: Pointer to the sorted array.
 * @low: The lower index of the range.
 * @high: The upper index of the range.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
	int mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (array)
	{
		if (array[bound] == value)
			return (bound);
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		
		low = bound / 2;
		high = (bound < size - 1) ? bound : size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", low, high);
		return (binary_search_helper(array, low, high, value));
	}
	return (-1);
}
