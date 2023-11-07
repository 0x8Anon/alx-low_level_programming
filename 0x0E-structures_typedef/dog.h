#ifndef _my_dog_
#define _my_dog_
/**
 * struct dog - dog structure
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: the dog's structure
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

