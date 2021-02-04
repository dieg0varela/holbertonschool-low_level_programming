#include <stdio.h>
/**
* main -Entry point
*
* Description: Print all numbers from 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
	int d, u;

	for (d = '0' ; d <= '9' ; d++)
	{
		for (u = '0' ; u <= '9' ; u++)
		{
			putchar(d);
			putchar(u);
			if (u == '9' && d == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
