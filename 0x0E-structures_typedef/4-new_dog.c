#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = malloc(strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < (int)strlen(name) + 1; i++)
		((*dog).name)[i] = name[i];
	(*dog).age = age;
	(*dog).owner = malloc(strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < (int)strlen(owner) + 1; i++)
		((*dog).owner)[i] = owner[i];
	return (dog);
}

