#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	typedef struct Dog {
		char *name;
		float age;
		char *owner;
	}dog_t;
	
	dog_t dog;
	dog_t *dog_ptr = &dog

	dog_ptr -> name = name;
	dog_ptr -> age = age;
	dog_ptr -> owner = owner;

	
	return (dog_ptr);
}
