#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a, A;
	a = 'a';
	A = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		a++;
	}

	while (capAlpha < 'z')
	{
		putchar(capAlpha);
		A++;
	}

	putchar('\n');
	return (0);
}

