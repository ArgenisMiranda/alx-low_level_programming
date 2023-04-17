#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - init variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: age of dog
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
