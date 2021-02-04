#include <stdio.h>
/**
* main - Entry point
*
* Description: Show all te alphabet first in lowercase next to uppercase
* Return: Always 0 (Sucess)
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
