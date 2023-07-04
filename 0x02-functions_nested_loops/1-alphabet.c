#include "main.h"

/**
 * print_alphabet - prints the alphabet a-z using _putchar
*/

void print_alphabet(void)
{
	int cha;

	for (cha = 'a'; cha <= 'z'; cha++)
		_putchar(cha);
	_putchar('\n');
}
