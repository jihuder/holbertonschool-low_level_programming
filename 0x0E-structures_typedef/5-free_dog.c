#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - clean the memory of doggo
 *
 * @d: Aim at Doggo to be free
 **/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
