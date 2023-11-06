#include "dog.h"
#include <stdlib.h>

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
	int len1 = 0, len2 = 0;
	dog_t *an_dog;

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	an_dog = malloc(sizeof(dog_t));
	if (an_dog == NULL)
		return (NULL);
	an_dog->name = malloc((len1 + 1) * sizeof(char));
	an_dog->owner = malloc((len2 + 1) * sizeof(char));

	if (an_dog->name == NULL || an_dog->owner == NULL)
	{
		free(an_dog->name);
		free(an_dog->owner);
		free(an_dog);
		return (NULL);
	}
	for (len1 = 0; name[len1] != '\0'; len1++)
		an_dog->name[len1] = name[len1];
	an_dog->name[len1] = '\0';
	for (len2 = 0; owner[len2] != '\0'; len2++)
		an_dog->owner[len2] = owner[len2];
	an_dog->owner[len2] = '\0';
	an_dog->age = age;
	return (an_dog);
}
