#include <stdio.h>
/**
* main -Entry point
*
* Description: Print all numbers from 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
	int c, d, u;

	for (c = '0' ; c <= '7' ; c++)
	{
		for (d = c + 1 ; d <= '8' ; d++)
		{
			for (u = d + 1 ; u <= '9' ; u++)
			{
				putchar(c);
				putchar(d);
				putchar(u);
				if (u == '9' && d == '8' && c == '7')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
