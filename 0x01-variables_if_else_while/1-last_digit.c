#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - the main function
 * Retuurn: returns 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10; is assign to a random number to the variable n each time it is executed using another if statement
	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else if (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("%d and is less than 6 and not 0\n", lastDigit);
	return (0);
}
