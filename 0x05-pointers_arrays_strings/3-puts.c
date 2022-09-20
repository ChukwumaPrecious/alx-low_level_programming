#include "main.h"

/**
 * _puts - print a given string to screen
 *
 * @str: passedpointer argument for string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		lens++;
	}
	_putchar('\n');
}
