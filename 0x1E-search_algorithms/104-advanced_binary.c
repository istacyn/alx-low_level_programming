#include "search_algos.h"

/**
 * print_array - Prints the elements of an array.
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
 * recursive_binary - Perform a recursive binary search on a sorted array.
 * @array: The array to search in.
 * @low: The lower index of the search range.
 * @high: The upper index of the search range.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value && (mid == low || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			high = mid;
		if (array[mid] < value)
			low = mid + 1;

		return (recursive_binary(array, low, high, value));
	}

	return (-1);
}

/**
 * advanced_binary - Perform an advanced binary search on a sorted array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
