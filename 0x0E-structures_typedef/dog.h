#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that create a dog info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: first struct with alx
 */

struct dog

{

	char *name;
	float age;
	char *owner;

};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif