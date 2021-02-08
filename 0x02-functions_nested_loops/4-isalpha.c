#include "holberton.h"
/**
* _isalpha - Entry point
* @c: letter will check
*
* Description: Say if c is letter of not
* Return: 1 if is a letter or 0 ir not
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
