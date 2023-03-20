#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog struct variable
 * @d: address of struct memory
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	if (!dog)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}