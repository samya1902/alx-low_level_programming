#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_nb - check if is digit
 * @str: array string
 * Return: 0
 */
int check_nb(char *str)
{
	unsigned int c;

	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
			return (0);
		c++;
	}
	return (1);
}
/**
 * main - Entry
 * @argc: args number
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int n;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (; i < argc; i++)
		{
			if (check_nb(argv[i]))
			{
				n = atoi(argv[i]);
				sum = sum + n;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
