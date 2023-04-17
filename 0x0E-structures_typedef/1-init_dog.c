#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: variable name
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*(name) != '\0')
		(*d).name = name;
	(*d).age = age;
	if (*(name) != '\0')
		(*d).owner = owner;
}
