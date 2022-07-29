#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: how many bytes to allocate
 *
 * Return: pointer to the allocated memory, if malloc fails, the malloc_checked
 *         function should cause normal process termination with a status value
 *          of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem_addr;

	mem_addr = malloc(b);
	if (mem_addr == NULL)
		exit(98);
	return (mem_addr);
}
