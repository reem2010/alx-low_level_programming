#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define new type dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner of the dog
 * Description: this new tybe give information about
 * the dog name ,age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
