#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fizz buz depending on divisibility
 * Return: return 0
 */

int main(void)
{
	int n;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char q[] = "FizzBuzz";

	for (n = 1 ; n <= 100 ; n++)
	{
		if (n == 100)
			printf("%s", b);
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s ", q);
		else if (n % 3 == 0)
			printf("%s ", f);
		else if (n % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
