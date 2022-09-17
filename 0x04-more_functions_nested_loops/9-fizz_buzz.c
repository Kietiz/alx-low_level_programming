#include <stdio.h>

/**
 * main - prints fizz buz depending on divisibility of number
 * fizz - number divisiblby 3 and not 5
 * buzz - number divisible by 5 and not 3
 * fizzbuzz - number divisible by 5 and 3
 * Return: return fizz , buzz or fizzbuzz or number
 */

int main(void)
{
	int n;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char q[] = "FizzBuzz";

	for (n = 0 ; n <= 100 ; n++)
	{
		if ((n % 3 == 0) && (n % 5 != 0))
		{
			putchar(f);
		}
		else if ((n % 3 != 0) && (n % 5 == 0))
		{
			putchar(b);
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			putchar(q);
		}
		else
		{
			printf("%d", n);
		}
	}
	putchar('\n');
}
