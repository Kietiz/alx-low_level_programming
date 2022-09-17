#include "main.h"

#include <stdio.h>

/**
 * more_numbers - prints numbers from 1 to 14 10 ties
 * Return: Return 0
 */

void more_numbers(void)
{
	int i;
	int count;

	for (count = 0 ; count < 10 ; count++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
