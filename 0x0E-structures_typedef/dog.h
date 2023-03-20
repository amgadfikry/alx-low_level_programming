#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new struct called dog
 * @name: pointer
 * @age: float
 * @owner: pointer
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
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
#endif
