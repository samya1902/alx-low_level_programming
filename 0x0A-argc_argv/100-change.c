#include <stdio.h>
/**
 * main - Entry
 * @argc: argument count
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int nb;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("0\n");
	}
	return (0);
}
