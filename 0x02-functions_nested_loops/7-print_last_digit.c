#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: takes input for functions.
 * Return: lastDigit
*/
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastDigit);
}
