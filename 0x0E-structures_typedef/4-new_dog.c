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

	dog = malloc((sizeof(char *) * 2) + sizeof(float));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(name));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = malloc(sizeof(owner));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	(*dog).owner = owner;
	return (dog);
}

