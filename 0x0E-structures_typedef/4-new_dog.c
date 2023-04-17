#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length = 0, owner_length = 0, i;
	dog_t *new_dog;

	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_length + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
