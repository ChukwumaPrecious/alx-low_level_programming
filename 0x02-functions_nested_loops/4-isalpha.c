#include "main.h"

/**
 * _isalpha - Check for alphabetical letters
 * @c: An input character to be checked
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
