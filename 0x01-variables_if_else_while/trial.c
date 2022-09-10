#include <stdio.h>
/**
 * main - returns a string
 * Description: states whether a number is positive or negative or 0
 * Return: return 0 when successful
 */
int main(void)
{
	int n = 2;

	if (n > 0)
		printf("%d\n is positive", n);
	else if (n == 0)
		printf("%d\n is zero", n);
	else
		printf("%d\n is negative", n);
return (0);
}
