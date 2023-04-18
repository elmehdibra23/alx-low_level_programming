#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: Pointer to char representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to char representing the dog's owner
 *
 * Description: A structure named "dog" with three elements: name, age, and owner.
 * The name and owner elements are pointers to char (char *), and the age element
 * is of type float.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
