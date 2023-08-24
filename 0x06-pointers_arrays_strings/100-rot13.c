#include "main.h"
#include <stdio.h>

/**
 * *rot13 - function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Return: s
 */
char *rot13(char *s)
{
	int f;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (f = 0 ; s[f] != '\0' ; f++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (s[f] == data1[j])
			{
				s[f] = datarot[j];
				break;
			}
		}
	}
	return (s);

}
