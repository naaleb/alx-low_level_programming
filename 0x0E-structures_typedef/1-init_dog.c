#ifndef DOG_H
#define DOG_H

/**
  *file dog.h
  *berif structure representing a dog and it attributes
  *init_dog - initialize a variable of type struct dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include "dog.h"
/**
  * init_dog.c
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
