#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int isnumber;
	int n;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (; i < argc; i++)
		{
			isnumber = isdigit(argv[i]);
			if (isnumber == 1)
			{
				n = atoi(argv[i]);/* atoi convert to string*/
				sum = sum + n;
			}
			else
			{
				printf("Error\n");
				break;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
