#ifndef STRUCT_H
#define STRUCT_H

/**
 * struct dog - holds details of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
