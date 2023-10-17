#include "dog.h"

/**
 * print_dog - print the dog info
 * @d: the dog struct
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
	}
}
