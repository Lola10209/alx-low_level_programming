#include "main.h"

/**
 * _isupper - checks if for uppercase character
 * @c: the character to be checked
 * Return: returns 1 in c is uppercase, 0 is otherwise
 */
int _supper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
