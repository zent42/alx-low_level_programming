#include "main.h"
/**
 * _isupper - test uppercase letters
 * @c: char to check
 *
 * Return: 1 if uppercase  or 0 if some thing else
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

