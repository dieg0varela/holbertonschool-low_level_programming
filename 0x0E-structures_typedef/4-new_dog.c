#include "dog.h"
#include "1-strdup.c"
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
	ret->age = age;
	ret->owner = _strdup(owner);

	return (ret);
}
