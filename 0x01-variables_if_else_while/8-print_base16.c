#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
