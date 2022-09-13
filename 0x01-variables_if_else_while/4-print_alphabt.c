#include <stdio.h>

/**
 * main - prints small letters without e and q
 * Description: uses the for and putchar functions
 * Return: return 0
 */

int main(void)
{
	int x;
	int y[16];

	for (x = 'a' ; x < 'e' ; x++)
		y[x] = x;
	for (x = 'f' ; x < 'q' ; x++)
		y[x] = x;
	for (x = 'r' ; x <= 'z' ; x++)
		y[x] = x;
	putchar(y[x]);
	putchar('\n');
	return (0);
}
