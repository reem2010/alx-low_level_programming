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
	int i;
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(sizeof(name));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < (int)sizeof(name) - 1; i++)
		((*dog).name)[i] = name[i];
	(*dog).age = age;
	(*dog).owner = malloc(sizeof(owner));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < (int)sizeof(owner) - 1; i++)
		((*dog).owner)[i] = owner[i];
	return (dog);
}

