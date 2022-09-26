#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the memory location which needs to be set
 * @b: value to be filled
 * @n: number of bytes to be filled starting from s to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 50; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

