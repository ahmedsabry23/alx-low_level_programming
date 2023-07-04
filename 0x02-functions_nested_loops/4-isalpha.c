#include "main.h"

/**
 * _isalpha - function that checks for alphabetic
 * character both lowercase and uppercase
 * @c: takes input for other functions.
 * Return: always 0 (success)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
