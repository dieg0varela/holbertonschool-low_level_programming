#include "holberton.h"
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

	for (i = 1; i < n ; i++)
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

	int minus = 0, cifras = 0, j = 0;

	while (!flag)
	{
		if ((s[i] == '-') && (foundnum == 0))
			minus++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			foundnum = 1;
			cifras++;
		}

		if (foundnum == 1 && (s[i] < '0' || s[i] > '9'))
		{
			flag = 1;
			i--;
		}
		if (s[i] == '\0')
		{
			flag = 1;
		}

		i++;
	}
	if (foundnum == 1)
	{
		for (j = i - cifras ; j < i ; j++)
		{
			num += (s[j] - '0') * (_pow(10, cifras));
			cifras--;
		}
		if (minus % 2 == 1)
			num = -num;
	}
	return (num);
}
