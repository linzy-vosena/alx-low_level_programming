#include "main.h"

/**
 * get_endianness - checks for indianess
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *) &i;

	return (*ptr);
}
