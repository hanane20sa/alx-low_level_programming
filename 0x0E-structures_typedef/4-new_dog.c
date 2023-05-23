#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)

{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _strcpy - copies the string
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int length, j;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog (success)
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
		return (dog);
}
