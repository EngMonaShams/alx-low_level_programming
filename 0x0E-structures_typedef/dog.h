#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: its a dog structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H*/
