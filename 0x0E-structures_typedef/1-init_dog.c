#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
  *init_dog - initialize a variable of type struct dog
  *@d: pointer to struct dog
  *@name: dog name to initialize
  *@age: dog age
  *@owner: dog owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
