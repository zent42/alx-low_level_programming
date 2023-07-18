#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog structure
 * @d: pointer to struct dog to print
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
d->name = "(unknown)";
if (d->owner == NULL)
d->owner = "(unknown)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


