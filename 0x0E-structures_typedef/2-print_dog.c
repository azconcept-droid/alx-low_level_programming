#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog profile
 * @d: pointer to dog address
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	else if (d->owner == NULL)
		printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	else if (d->age <= 0)
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
