#include "holberton.h"
/**
* _isupper - Entry point
* @c: number to work
*
* Description: Say if a letter is uppercase
* Return: 1 if is upercase , 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
