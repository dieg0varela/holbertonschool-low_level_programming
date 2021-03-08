#include "dog.h"
#include "1-strdup.c"
#include <stdlib.h>
/**
* new_dog - Entry point
* @name: Name of the dog
* @age: Age of the dog
* @owner: Name of the owner
*
* Description: Make a new struct dog with values
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ret;

	ret = malloc(sizeof(dog_t));
	if (ret == 0)
		return (0);

	ret->name = _strdup(name);
	if (ret->name == 0)
	{
		free(ret);
		return (0);
	}
	ret->age = age;
	ret->owner = _strdup(owner);
	if (ret->owner == 0)
	{
		free(ret->name);
		free(ret);
		return (0);
	}

	return (ret);
}
