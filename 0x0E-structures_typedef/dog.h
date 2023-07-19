#ifndef DOG_H
#define DOG_H

/**
  *dog.h
  *dog attribute include name, age and owner
  *struct dog - representing a dog with it attributes
  *@name: dog name
  *@age: doge age
  *@owner: dog owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  *dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
