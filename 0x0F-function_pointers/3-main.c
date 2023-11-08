#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: argument list
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*calc_calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/**
	 * calc_calc is function pointer that takes result of get_op_func
	 * which is expected to be a function
	 * that takes two ints and returns an int.
	 */
	calc_calc = get_op_func(operator);

	/**
	 * If the operator passed is not one of those in
	 * ops.op in get_op_func, NULL will be returned
	*/
	if (calc_calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/**
	 * pass num1 and num2 into calc_calc
	*/
	result = calc_calc(num1, num2);
	printf("%d\n", result);
	return (0);
}
