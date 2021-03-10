#include "function_pointers.h"
/**
* print_name - Entry point
* @name: String name
* @f: Function pointer
*
* Description: Call a function pointer and pass a name
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if ((f != 0) && (name != 0))
		(*f)(name);
}
