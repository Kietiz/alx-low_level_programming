#include <stdio.h>

/*
 * main - prints small letters without e and q
 * Description: uses the for and putchar functions
 * Return: return 0
 */

int main(void)
{
	int x = 'a';

	while (x != 'q' || x != 'e' || x <= 'z')
	{
		putchar(x);
	x++;
	putchar('\n');
	}
	return (0);
}
