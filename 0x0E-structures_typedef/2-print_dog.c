#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
if (d == NULL)
return;

char *name = d->name != NULL ? d->name : "(nil)";
char *owner = d->owner != NULL ? d->owner : "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}

