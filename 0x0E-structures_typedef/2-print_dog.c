#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_dog - Entry point
* @d: Struct dog
*
* Description: Print the content of a stuct dog
* Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
			printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
