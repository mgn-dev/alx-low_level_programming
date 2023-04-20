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
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		int first_int = atoi(argv[1]);
		int second_int = atoi(argv[3]);
		char *op = argv[2];
		int (*ptr)(int a, int b);
		int result;

		if (op[0] != '+' &&
			op[0] != '-' &&
			op[0] != '*' &&
			op[0] != '/' &&
			op[0] != '%')
		{
			printf("Error\n");
			exit(99);
		}

		if ((second_int == 0 && op[0] == '/') || (second_int == 0 && op[0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}

		ptr = get_op_func(op);
		result = ptr(first_int, second_int);
		printf("%d\n", result);

		return (0);
	}
}
