#include <stdio.h>
#include <stdlib.h>

/**
* main - prints own opcodes.
* @argc: number of arguments.
* @argv: argument array.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int bytes, i, c;
	FILE *fp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}

	bytes = atoi(argv[1]);

	fp = fopen(__FILE__, "r");

	i = 0;

	do {
		c = fgetc(fp);

		if (i < bytes)
			printf("%02x ", c);
		i++;
	} while (i < bytes);

	printf("\n");

	return (0);
}
