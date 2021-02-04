#include <stdio.h>
/**
* main - Entry Point
*
* Description: Print numbre from 0 to 9 separated with a ,
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
