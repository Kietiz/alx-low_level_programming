#include <stdio.h>

#include <ctype.h>

/**
 * main - prints out alphabets in small and caps
 * Description: uses for loop and putchar
 * Return: return 0 if successful
 */

int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
		putchar(toupper(x));
			putchar('\n');
			return (0);
}

