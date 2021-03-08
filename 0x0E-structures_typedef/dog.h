#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - Structure for a dog
* @name: name of the dog
* @age: age of the dog
* @owner: Owner of the dog
*
* Description: Info of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
