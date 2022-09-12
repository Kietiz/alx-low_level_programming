#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Description: uses the putchar function
 * Return: return 0
 */

int main(void)
{
	int x;
	int y = x % 16;

	for (x = 0 ; x <= 16 ; x++)
		putchar(y + '0');
	putchar('\n');
	return (0);
}
