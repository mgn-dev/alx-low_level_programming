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
	int i = 0;

	while (s != NULL && ops[i].op != NULL && ops[i].op[0] != s[0] && i < 6)
		i++;

	if (s != NULL && ops[i].op != NULL)
		return (ops[i].f);

	return (NULL);
}
