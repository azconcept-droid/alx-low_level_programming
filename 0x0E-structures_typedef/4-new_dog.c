#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - returns a pointer to space in memory containing copy of string.
 * @s: pointer to the string.
 * Return: Pointer to a string stored in memory.
 */
char *_strcpy(char *s)
{
	char *copy;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);
/*Get the length of the string.*/
	while (s[i] != '\0')
		i += 1;
/*+1 to include the terminating character in size.*/
	i++;

	copy = malloc(i * sizeof(*copy));
	if (copy == NULL)
		return (NULL);
	while (j < i)
	{
		copy[j] = s[j];
		j++;
	}
	return (copy);
}

/**
 * new_dog - create an instance of struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: name of owner
 * Return: instance of struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
/*Assign name element of new struct to the copy of name.*/
	new_dog->name = _strcpy(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
/*Assgin owner element of new struct to the copy of ownwer.*/
	new_dog->owner = _strcpy(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
