#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog to be created
 * @name: name if the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0;
	int owner_len = 0;
	int i;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	while (name[name_len] != '\0')
		name_len++;
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];
	while (owner[owner_len] != '\0')
		owner_len++;
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
