#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 *
 *Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		len /= 2;

	else
		len = len / 2 + 1;
	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
