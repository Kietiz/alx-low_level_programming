#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Description: uses the putchar function
 * Return: return 0
 */

int main(void)
{
	char x;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
