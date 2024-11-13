#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure définissant un chien avec des informations de base
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif