#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char name's dog
 * @age: dog age
 * @owner: pointer to char owner's dog
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
