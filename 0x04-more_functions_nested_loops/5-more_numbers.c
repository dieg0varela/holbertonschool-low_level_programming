#include "holberton.h"
/**
* more_numbers - Entry point
*
* Description: print numbers from 0 to 14
* Return: nothing
*/
void more_numbers(void)
{
	int i, num;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if ((num / 10) != 0)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
