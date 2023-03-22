#include<stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	unsigned long a, b, sum;
	int i;

	a = 0;
	b = 1;
	i = 0;
	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu", sum);
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
