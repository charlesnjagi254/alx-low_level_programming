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
	char alpha, capAlpha;
	alpha = 'a';
	Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (capAlpha < 'z')
	{
		putchar(capAlpha);
		Alpha++;
	}

	putchar('\n');
	return (0);
}

