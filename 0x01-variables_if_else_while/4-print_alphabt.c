#include <stdio.h>

/**
 * main - prints small letters without e and q
 * Description: uses the for and putchar functions
 * Return: return 0
 */

int main(void)
{
	char x[24] = {'a'};
	int y;

	for (y = 'a' ; y < 'e' ; y++)
		y = x[24];
	for (y = 'f' ; y < 'q' ; y++)
		y = x[24];
	for (y = 'r' ; y <= 'z' ; y++)
		putchar(x[24]);
	putchar('\n');
	return (0);
}
