#include "main.h"

/**
 * times_table - creates table
 * Description: uses for loop
 * Return: always 0
 */

void times_table(void)
{
	int row;
	int column;
	int val;

	for (row = 0 ; row <= 9 ; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			val = row * column;
			if (val / 10 > 0)
			{
				_putchar((val / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((val % 10) + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

