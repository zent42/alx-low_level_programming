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

char *default_name = "(unknown)";
char *default_owner = "(unknown)";

if (d->name == NULL)
d->name = default_name;
if (d->owner == NULL)
d->owner = default_owner;

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}



