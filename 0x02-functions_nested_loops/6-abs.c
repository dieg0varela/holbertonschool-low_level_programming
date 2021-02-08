#include "holberton.h"
/**
* _abs - Entry point
* @i: number to change
*
* Description: Absolute valueof number
* Return: Absolute value of the number
*/
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		if (i < 0)
		{
			return (-i);
		}
		else
		{
			return (0);
		}
	}
}
