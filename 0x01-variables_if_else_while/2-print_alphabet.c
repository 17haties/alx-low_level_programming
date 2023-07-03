#include "main.c"
/**
 * print_alphabet - make the alphabet
 * followed by a new line
 * Return:(void)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	_putchar('\n');
	return (0);
}

