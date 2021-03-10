#include "function_pointers.h"
/**
* int_index - Entry point
* @array: array of ints
* @size: Size of array
* @cmp: Pointer to function to use
*
* Description: Return the index of the first elemet if the compare is true
* Return: int Index in the array
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
	}
	return (-1);
}
