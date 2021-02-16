#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Make a valid key to crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, i = 0, t = 0;
	char *res;
	char m;

	srand(time(NULL));
	while (n < 2772)
	{
		i = rand() % 255;
		if ((i < 127))
		{
			if ((n + i <= 2772))
			{
				n += i;
				putchar(i);
			}
		}
		
	}
	/*printf("%s\n", res);*/
	return (0);
}
