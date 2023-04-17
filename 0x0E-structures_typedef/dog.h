#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for a dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Description: struct called "dog" that stores
 * the name, age, and owner of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
