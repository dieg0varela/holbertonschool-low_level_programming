#include "holberton.h"
/**
* _isdigit - Entry point
* @c: numbert to work
*
* Description: Say if c is number or not
* Return: 1 if is number, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
