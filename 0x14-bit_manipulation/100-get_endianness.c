#include "holberton.h"
/**
* get_endianness - Entry point
*
* Description: Says if the system is a little or big endian
* Return: 0 is big, 1 is little
*/
int get_endianness(void)
{
	unsigned int x = 1;

	return ((int) (((char *)&x)[0]));
}
