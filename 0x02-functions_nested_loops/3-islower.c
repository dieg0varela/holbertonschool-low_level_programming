#include "holberton.h"
/**
* _islower - Entry point
* @c: the number to be checked
*
* Description: Say if c is lowercase or not
* Return: 1 if is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
