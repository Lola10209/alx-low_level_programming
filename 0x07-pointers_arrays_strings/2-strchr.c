#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: This is the C strin to be scanned
 * @c: This is the character string to be scanned in str.'
 * Return: a pointer to the first occurrence of the characterr c in the string s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
