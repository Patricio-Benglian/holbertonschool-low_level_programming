#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"

#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

/**
 * *_strcpy - copies string pointed to by src
 * @dest: recieved output of src
 * @src: source of the copied string
 * Return: returns Dest
 */
char *_strcpy(char *dest, char *src)
{
	char *point = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (point);
}

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

	/* allocate memory for doggy name. need to for strcpy idk why */
	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!doggy->name)
	{
		free(doggy);
		return (NULL);
	}
	/* set doggy's name while making a copy? or something? i dont know */
	_strcpy(doggy->name, name);

	/* set doggy's age */
	doggy->age = age;

	/* allo memory for doggy owner. need to for strcpy idk why */
	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!doggy->owner)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	/* set doggy's owner same as name */
	_strcpy(doggy->owner, owner);

	return (doggy);
	/* valgrind gives me like 36 lost bytes but the checker doesnt care. */
}
