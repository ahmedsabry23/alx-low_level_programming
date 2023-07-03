#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: constant
 * @n: number of bytes to be used
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ite;

	for (ite = 0; n > 0; ite++, n--)

	{
		s[ite] = b;
	}
	return (s);
}
