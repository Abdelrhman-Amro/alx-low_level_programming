#include "dog.h"

/**
 * new_dog - store new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog = malloc(sizeof(dog_t));

	if (Ndog == NULL)
		return (NULL);
	Ndog->name = name;
	Ndog->age = age;
	Ndog->owner = owner;
	return (Ndog);
}
