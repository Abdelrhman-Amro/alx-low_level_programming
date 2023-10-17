#include "dog.h"

/**
 * free_dog - free the dog memory
 * @d: dog to free
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
