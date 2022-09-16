#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 *
 * @n: integer to set diagonal
 */
void print_diagonal(int n)
{
int i;
int space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
		{
for (space = 0; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
