#include "main.h"

/**
 * _strien - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strien(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}