#include "dog.h"

/**
 * init_dog - intializes a variable of type struct dog
 * @d: struct d
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
*/
void init_dog(struct dog *d, char *name, float age, char
*owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
