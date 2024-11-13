#include <stdlib.h>
#include <string.h>
#include "dog.h"

static dog_t **all_dogs;
static int dog_count;

/**
 * free_all_dogs - Frees all allocated dogs
 */
void free_all_dogs(void)
{
	int i;

	for (i = 0; i < dog_count; i++)
	{
		if (all_dogs[i])
		{
			free(all_dogs[i]->name);
			free(all_dogs[i]->owner);
			free(all_dogs[i]);
		}
	}
	free(all_dogs);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	if (!all_dogs)
		atexit(free_all_dogs);

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	all_dogs = realloc(all_dogs, sizeof(dog_t *) * (dog_count + 1));
	if (all_dogs == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	all_dogs[dog_count++] = dog;
	return (dog);
}
