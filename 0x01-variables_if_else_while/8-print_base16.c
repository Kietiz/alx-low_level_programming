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

	for (x = 0, y = 'a' ; x <= 9, y <= 'f' ; x++, y++)
		putchar(x);
		putchar(y);
	putchar('\n');
	return (0);
}
