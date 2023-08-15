#include "main.h"

/**
 * _islower - checks for alphabets in lower case
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
