#include "function_pointers.h"
/**
* array_iterator - Entry point
* @array: Array of numbers
* @size: Size of array
* @action: Function pointer to function
*
* Description: I dont know
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if ((size != 0) && (array != 0) && (action != 0))
	{
		for (i = 0 ; i < size ; i++)
		{
			(*action)(array[i]);
		}
	}
}
