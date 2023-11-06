#include "dog.h"

/**
 * new_dog - function creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dof with datatype dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t an_dog;
	an_dog.name = name;
	an_dog.age = age;
	an_dog.owner = owner;
}
