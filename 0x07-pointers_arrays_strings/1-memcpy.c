#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory copied to
 * @src: memory copied from
 * @n: number of memory bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
