#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_numbers - Entry point
* @separator: separator for numbers
* @n: count of numbers
*
* Description: Print all numbers with separator
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (separator != 0 && n > 0)
	{
		va_start(list, n);
		for (i = 0 ; i < n ; i++)
		{
			printf("%i", va_arg(list, int));
			if (i < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
