#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(name) + sizeof(float) + sizeof(owner));
	if (dog == NULL)
		return (NULL);
	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;
	return (dog);
}

