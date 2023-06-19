#include "dog.h"
#include <string.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d:dog ptr
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
