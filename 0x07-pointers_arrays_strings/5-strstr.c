#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring_
 * @haystack: AsC string to be scanned
 * @needle: second param
 * Return: Pointer to the first occurrence of needle
 * needle not part of  haystack
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
