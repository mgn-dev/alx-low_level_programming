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
	if (argc > -1 || argv[0])
		printf("%d\n", argc);

	return (0);
}
