#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - functions allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equals to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
