#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a newline
 * you can only use the putcher
 * Return: 0
 */
int main(void)
{
int l = 'a';
while (l <= 'z')

{
putchar(l);
l += 1;
}

putchar('\n');

return (0);

}
