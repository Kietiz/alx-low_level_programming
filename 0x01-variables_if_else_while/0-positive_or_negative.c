#include <stdlib.h>

#include <time.h>

/**
 * main - prints random numbers and states their sign
 * Description: uses rand() and if else functions
 * Return: return 0 when run successfully
*/

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n > 0)
					printf("%d\n is positive", n);
				else if (n == 0)
					printf("%d\n is zero", n);
				else
					printf("%d\n is negative", n);
					return (0);

}
