#include <stdio.h>

/**
 * main - prints small letters without e and q
 * Description: uses the for and putchar functions
 * Return: return 0
 */

int main(void)
{
	char x[24] = {abcdfghijklmnoprstuvwxyz};

	putchar(x[24]);
	putchar('\n');
	return (0);
}
