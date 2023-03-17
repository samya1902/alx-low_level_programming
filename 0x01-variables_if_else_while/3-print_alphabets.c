#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char ch1;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch1 = 'A';
	while (ch1 <= 'Z')
	{
		putchar(ch1);
		ch1++;
	}
	putchar('\n');
	return (0);
}
