#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string  owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = malloc(strlen(name) + 1);
	if (name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->owner == NULL)name);
		free(p);
		return (NULL);
	}
	strcpy(p->name, name);
	p->age = age;
	strcpy(p->owner, owner);
	return (p);
}
