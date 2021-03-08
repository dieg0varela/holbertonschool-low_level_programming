#include "dog.h"
/**
* inti_dog - Entry point
* @d: Struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: Initialize a struct dog with values
* Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
