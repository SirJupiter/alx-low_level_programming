#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This is the main function for entry
 *
 * Return: 0 on success of execution
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	num = n % 10;
	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	else if (num == 0)
		printf("Last digit of %d is %d and is 0\n", n, num);
	else if (num < 6 && num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	return (0);
}
