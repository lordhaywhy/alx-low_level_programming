#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program to test the arg
 *
 * @argc: the argument count
 * @argv: the argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}
