#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return: Always (Success)
 */
int main(voi)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
