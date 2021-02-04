#include <stdio.h>
/**
* main -Entry point
*
* Description: Show numbers from 0 to 9 using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
