#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Entry point
* @d: Struct dog
*
* Description: Free all componets of dog
* Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
	}
	free(d);
}
