#include <stdio.h>
#include "dog.h"
/**
 *
 *
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
