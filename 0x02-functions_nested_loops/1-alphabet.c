#include "main.h"

/**
 * a function that prints the alphabets in lowercase
 * followed by a new line
 * 
 */

void print_alphabet(void)
{

	char ch;

	ch = 'a';
	while (ch <= 'z')
{
	_putcher(ch);
	ch++;
}
	_putcher('\n');

}
