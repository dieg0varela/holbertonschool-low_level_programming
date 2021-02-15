#include "holberton.h"
/**
* _atoi - Entry point
* @s: String
*
* Description: Return a integer from a string
* Return: Int
*/
int _atoi(char *s)
{
	int flag = 0, num = 0, foundnum = 0, i = 0;

	int plus = 0, minus = 0, cifras = 0, j = 0;

	while (!flag)
	{
		if (s[i] == '+')
			plus++;
		if (s[i] == '-')
			minus++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			foundnum = 1;
			cifras++;
		}
		if (foundnum == 1 && s[i] < '0' && s[i] > '9')
			flag = 1;
		i++;
	}
	for (j = i - cifras ; j < i ; j++)
	{
		num = s[j] * (10 ^ (cifras - i));
	}
	return (num);
}
