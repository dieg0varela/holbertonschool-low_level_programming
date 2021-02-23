#include "holberton.h"
/**
* _strspn - Entry point
* @s: String
* @accept: String
*
* Description: Gets the length of a prefix
* Return: number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, flag = 1;
	unsigned int ret = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		flag = 1;
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				ret++;
				flag = 0;
				break;
			}
		}
		if (flag)
			break;
	}
	return (ret);
}
