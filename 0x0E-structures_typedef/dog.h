#ifndef DOG_H
#define DOG_H

/**
* struct dog - basic information about a dog
* @name: the dog's name
* @age: the dog's age
* @owner: the dog's owner
*
* Description: This structure represents basic information about a dog,
* including its name, age, and owner.
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */

