#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
