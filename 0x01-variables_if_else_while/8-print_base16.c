#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Description: uses the putchar function
 * Return: return 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 16 ; x++)
		if (x >= 9)
			y = 'a'++;
	putchar(x);
	putchar(y + '0');
	putchar('\n');
	return (0);
}
