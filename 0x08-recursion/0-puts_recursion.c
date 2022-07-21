#include <stdio.h>
/**
* _puts_recursion - prints string followed by new line
* @s: pointer to string
* Return: Void
*/
void _puts_recursion(char *S)
{
	if (*S != '\0')
	{
		putchar(*S)
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}