#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int get_string_length(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}

return (length);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *copy_string(char *dest, char *src)
{
int length = get_string_length(src);
int i;

for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *create_dog(char *name, float age, char *owner)
{
dog_t *dog;
int name_length, owner_length;

name_length = get_string_length(name);
owner_length = get_string_length(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (name_length + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
dog->owner = malloc(sizeof(char) * (owner_length + 1));
if (dog->owner == NULL)
{
free(dog)
free(dog->name);
return (NULL);
}

copy_string(dog->name, name);
copy_string(dog->owner, owner);
dog->age = age;

return (dog);
}

