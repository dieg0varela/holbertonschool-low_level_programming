#include "variadic_functions.h"
/**
* sum_them_all - Entry point
* @n: number
*
* Description: Sum infinite numbers
* Return: Int resault
*/
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
		res += va_arg(list, int);
	va_end(list);
	return (res);
}
