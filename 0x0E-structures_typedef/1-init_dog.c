#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @p: pointer
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *p, char *name, float age, char *owner)

{
	if (p == NULL)
		p = malloc(sizeof(struct dog));
	p->name = name;
	p->age = age;
	p->owner = owner;
}
