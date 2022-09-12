#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 * Description: uses the for statement
 * Return: return 0;
 */

int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
