#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
