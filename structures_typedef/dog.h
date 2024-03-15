#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -a dog's basic info
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Descriiption: this structure represents a dognwhit its name,
 * age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
