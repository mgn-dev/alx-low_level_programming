#include <stdio.h>

/**
* main - check the code.
* @argc: number of arguments.
* @argv: argument array.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	if (argc > -1 && argv)
		printf("%d\n", argc - 1);

	return (0);
}
