#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: the name of dog
 * @age: the age og dog
 * @owner: the name dog of owner
 * Description: Longer description
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
