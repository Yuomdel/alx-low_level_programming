#include "dog.h"

/**
* init_dog - inits a variable of
*type dog
*@d:  identity of gog
*@name:the name of dog
*@age:the age of dog
*@owner: name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
