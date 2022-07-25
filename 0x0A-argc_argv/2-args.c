#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of arguemet passed to main
 * @argc: number of actual parameter passed to main
 * @argv: pointer of first element passed to main
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	exit(EXIT_SUCCESS);
}
