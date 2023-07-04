#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: takes number input
*/
void print_times_table(int n)
{
	int n, m, p;

	if (n <= 15 && n >= 0)
	{
		for (n = 0; num <= n; ++n)
		{
			_putchar(48);

			for (m = 1; m <= n; ++m)
			{
				_putchar(',');
				_putchar(' ');

				p = n * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{
					_putcahr((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				} else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putcahr('\n');
		}
	}
}
