#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert string to int
 * @str: string input
 * Return: integer
 */
int _atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++)
	{
		res = res * 10 + str[i] - '0';
	}
	return (res * sign);
}
/**
 * main - Entry
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int mul, a, b;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);
}
