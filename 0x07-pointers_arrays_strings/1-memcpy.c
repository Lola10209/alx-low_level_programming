#include "main.h"
#include <string.h>

/**
 * _memcpy - a function that copies a memory area
 * @dest: first memory area
 * @src: second memory area
 * @n: number of bytes
 * Return: a pointer to the memory to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
