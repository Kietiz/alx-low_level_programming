#include <stdio.h>

/**
 * main - prints small letters without e and q
 * Description: uses the for and putchar functions
 * Return: return 0
 */

int main(void)
{
	int x;

	for (x = 'a' ; x < 'e' ; x++)
		for (x = 'f' ; x < 'q' ; x++)
			for (x = 'r' ; x <= 'z')
				putchart(x);
	putchar('\n');
}
