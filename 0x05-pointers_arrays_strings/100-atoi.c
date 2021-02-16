#include "holberton.h"
#include <stdio.h>
/**
* _pow - Entry point
* @num: number
* @n: times
*
* Description: Multiplies the number n times
* Return: Int res
*/
int _pow(int num, int n)
{
	int res = 1, i = 0;

	for (i = 0 ; i < n ; i++)
	{
		res = res * num;
	}
	return (res);
}


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
		if (foundnum == 1 && ((s[i] < '0' || s[i] > '9') || s[i] == '\0'))
		{
			flag = 1;
			i--;
		}

		i++;
	}
	for (j = i - cifras ; j < i ; j++)
	{
		num += (s[j] - '0') * (_pow(10, cifras - 1));
		cifras--;
	}
	if (minus > plus)
		num = -num;
	return (num);
}
