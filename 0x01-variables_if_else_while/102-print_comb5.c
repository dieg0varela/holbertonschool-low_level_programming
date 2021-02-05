#include <stdio.h>
/**
* main -Entry point
*
* Description: Print all numbers from 00 to 99
* Return: Always 0 (Success)
*/
int main(void)
{
	int m, c, d, u;

	for (m = '0'; m <= '9' ; m++)
	{
		for (c = '0' ; c <= '9' ; c++)
		{
			for (d = m ; d <= '9' ; d++)
			{
				for (u = c + 1 ; u <= '9' ; u++)
				{
					putchar(m);
					putchar(c);
					putchar(' ');
					putchar(d);
					putchar(u);
					if (u == '9' && d == '9' && c == '8' && m == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
