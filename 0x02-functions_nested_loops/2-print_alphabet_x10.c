#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int line, cha;

	for (line = 0; line <= 9; line++)

	{
		for (cha = 'a'; cha <= 'z'; cha++)
			_putchar(cha);
		_putchar('\n')
	}
}
