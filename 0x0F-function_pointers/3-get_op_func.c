#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - function that selects the correct function to
* perform the operation asked by the user.
* @s: math operator
*
* Return: pointer to corresponding function.
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op[0] != s[0])
		i++;

	if (i >= 0 && i < 5)
		return (ops[i].f);

	return (NULL);
}
