#include <stdio.h>
#include <stdlib.h>

/**
 * min - main function
 * @argc: number of actual arguments passed to main function
 * @argv: pointer to the first element in the array of arguements
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	exit(EXIT_SUCCESS);
}
