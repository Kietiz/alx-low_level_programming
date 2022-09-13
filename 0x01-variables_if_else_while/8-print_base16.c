#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Description: uses the putchar function
 * Return: return 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x);
	for (x = 'a' ; x <= 'f' ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
