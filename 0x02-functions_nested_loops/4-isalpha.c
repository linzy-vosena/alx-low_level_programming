#include "main.h"

/**
 * _isalpha - checks for alphabetic order
 *
 * @c: the alphabet to check for
 *
 * Return: 1 when c is a letter, otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'));
}
