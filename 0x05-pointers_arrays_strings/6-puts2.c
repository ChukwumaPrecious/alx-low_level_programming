#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: An input string*
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (*(str + 1) != '\0')

	{
		if (i % 2 == 0)
			_putchar (*(str + 1));
		i++;
	}
	_putchar('\n');
}
