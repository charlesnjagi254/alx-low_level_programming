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
	int a; A;

	a = 'a';
	A = 'A';

	while (a<= 'z')
	{
		putchar(a);
		a++;
	}

	while (A < 'z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');
	return (0);
}

