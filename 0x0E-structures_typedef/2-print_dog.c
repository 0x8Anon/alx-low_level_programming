#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct
 * @name: dog mame
 * @age: dog age
 * @owner: dog owner
 */


void print_dog(struct dog *d)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.2f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");

}
