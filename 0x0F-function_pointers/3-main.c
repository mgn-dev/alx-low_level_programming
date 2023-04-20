#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - calculates two integers.
* @argc: number of arguments.
* @argv: argument array.
*
* Return: addition of numbers.
*/
int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}
	else
	{
		int first_int = atoi(argv[1]);
		int second_int = atoi(argv[3]);
		char *op = argv[2];

		if (op[0] != '+' &&
			op[0] != '-' &&
			op[0] != '*' &&
			op[0] != '/' &&
			op[0] != '%')
		{
			printf("Error\n");
			return (99);
		}
		else
		{
			if ((second_int == 0 && op[0] == '/') || (second_int == 0 && op[0] == '%'))
			{
				printf("Error\n");
				return (100);
			}
			else
			{
				int (*ptr)(int a, int b);

				ptr = (get_op_func(op));
				printf("%d\n", ptr(first_int, second_int));

				return (0);
			}
		}
	}
}
