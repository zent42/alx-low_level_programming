#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(no name)";
	if (d->owner == NULL)
		d->owner = "(no owner)";

	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}

