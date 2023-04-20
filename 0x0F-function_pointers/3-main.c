#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - calculates two integers.
* @argc: number of arguments.
* @argv: argument array.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int first, second, result, (*ptr)(int a, int b);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	second = atoi(argv[3]);
	op = argv[2];

	if (second == 0 && (op[0] == '/' || op[0] == '%') && op[1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(op);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr(first, second);
	printf("%d\n", result);

	return (0);
}
