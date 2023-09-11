#ifndef DOG_H
#define DOG_H

/**
* struct dog - a sent said by a dog
* @name: the dog name
* @age: the dog age
* @owner: the name of the owner
*
* Description: it will say oofffff as a dog
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
