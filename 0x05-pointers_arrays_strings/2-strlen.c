#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: character to get string
 *
 * Return: return length
 */
int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
