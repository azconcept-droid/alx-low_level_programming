#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	/*Base case*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*Print character*/
	_putchar(*s);
	/*Go to the next address*/
	_puts_recursion(++s);
}
