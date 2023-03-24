#include<stdio.h>
/**
 * main - Entry
 * Return: 0;
 */
int main(void)
{
	long int i;
	long int max;
	long int n;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			max = i;
	}
	printf("%ld\n", max);
	return (0);
}
