#include "search_algos.h"
/**
* print_array - Entry point
* @array: Array to print
* @start: Start point
* @end: End point
*
* Description: Print array
* Return: Nothing
*/
void print_array(int *array, int start, int end)
{
	int i = start;

	printf("Searching in array:");
	for (i = start ; i <= end ; i++)
	{
		if (i != end)
			printf(" %i,", array[i]);
		else
			printf(" %i\n", array[i]);
	}
}

/**
* binary_search - Entry point
* @array: Pointer to array
* @size: Size of the array
* @value: Value to search
*
* Description: Binary search
* Return: Index of the array with the coincidense
*/
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = (int)size - 1;
	int mid = 0;

	while (start <= end)
	{
		print_array(array, start, end);
		mid = start + (end - start) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;

		else
			end = mid - 1;
	}
	return (-1);
}
