#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - Entry point
* @separator: separator for numbers
* @n: count of numbers
*
* Description: Print all strings with separator
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *str;

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(list, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if ((i < (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
