#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
* new_pet - creates a new pet
* @name: name of the pet
* @age: age of the pet
* @owner: owner of the pet
*
* Return: pointer to the new pet (Success), NULL otherwise
*/
pet_t *new_pet(char *name, float age, char *owner)
{
pet_t *pet;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

pet = malloc(sizeof(pet_t));
if (pet == NULL)
return (NULL);

pet->name = malloc(sizeof(char) * (len1 + 1));
if (pet->name == NULL)
{
free(pet);
return (NULL);
}

pet->owner = malloc(sizeof(char) * (len2 + 1));
if (pet->owner == NULL)
{
free(pet);
free(pet->name);
return (NULL);
}

_strcpy(pet->name, name);
_strcpy(pet->owner, owner);
pet->age = age;
return (pet);
}

