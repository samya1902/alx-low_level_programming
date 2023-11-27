#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_length - calculate a string length
 * @str: string
 * Return: int
 */
int str_length(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * new_dog - create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	int nameLen = str_length(name);
	int ownerLen = str_length(owner);

	newdog->name = malloc((nameLen + 1) * sizeof(char));
	newdog->owner = malloc((ownerLen + 1) * sizeof(char));
	for (int i = 0; i <= nameLen; i++)
		newdog->name[i] = name[i];
	for (int i = 0; i <= ownerLen; i++)
		newdog->owner[i] = owner[i];
	newdog->age = age;
	return (newdog);
}
