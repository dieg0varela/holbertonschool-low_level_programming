#include <stdio.h>
/**
* main - Entry point
*
* Desccription: Show all the alphabet except letters q and e
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
