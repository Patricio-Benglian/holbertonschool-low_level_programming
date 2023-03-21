#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 * Return: NULL on failure or doggy on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* create variable doggy with struct dog_t defined in dog.h */
	dog_t *doggy = NULL;

	/* assign memory to hold info according to size of the struct */
	doggy = malloc(sizeof(dog_t));
	/* memory check */
	if (!doggy)
	{
		free(doggy);
		return (NULL);
	}

	/* set doggy's name */
	doggy->name = name;
	/* set doggy's age */
	doggy->age = age;
	/* set doggy's owner */
	doggy->owner = owner;

	/* return NULL on failure */
	if (!doggy->name || !doggy->age || !doggy->owner)
	{
		free(doggy);
		return (NULL);
	}
	return (doggy);
}
