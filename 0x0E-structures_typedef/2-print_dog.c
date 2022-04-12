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
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
