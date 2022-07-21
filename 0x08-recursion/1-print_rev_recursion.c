#include <stdio.h>
/**
 * _print_rev_recursion - prints string followed by new line
 * @s: pointer to string
 * Return: Void
 */
void_print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s)
	}
}
