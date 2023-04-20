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
	int bytes, i;
	char c;
	int (*main_ptr)(int, char*arr[]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(unsigned char*)main_ptr);
		if (i < (bytes - 1))
			printf(" ");
		main_ptr++;
	}

	printf("\n");

	return (0);
}
