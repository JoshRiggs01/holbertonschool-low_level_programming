#ifndef dog_h
#define dog_h
/**
 * struct dog - struct for dog in dog.h
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	/**
	 * @name: pointer to name of dog
	 * @age: age of dog
	 * @owner: pointer to owners name
	 */
};
/**
 * dog_t - new type of struct dog_t
 */
typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
