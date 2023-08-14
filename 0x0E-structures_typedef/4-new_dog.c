#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - a function that updates the value it points to to 98.
 *
 * @s : pointer to int
 *
 * Return: count (length of string)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * _strcpy - a function that updates the value it points to to 98.
 *
 * @dest : destination
 * @src : source
 *
 * Return: dest (pointer)
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
/**
 * new_dog - a function that initiate dog data
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(_strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(_strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
