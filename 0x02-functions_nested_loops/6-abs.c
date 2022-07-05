#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: the number to be converted to it absolute
 * Return: returns an integer
 */
int _abs(int num)
{
	int abs = num * ((num > 0) - (num < 0));

	return (abs);
}
