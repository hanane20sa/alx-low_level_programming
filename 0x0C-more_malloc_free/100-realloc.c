#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated
 * @old_size: size in bytesnof the allocated space for ptr
 * @new_size: size in bytes of new memory
 * Return: NULL if new_size egal 0 and ptr if not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *p;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)p + j) = *((char *)ptr + j);
		free(ptr);
	}
	return (p);
}
