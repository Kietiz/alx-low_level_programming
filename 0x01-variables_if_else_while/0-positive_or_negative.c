#include <stdlib.h>

#include <time.h>

/**
 * main - genrates random numbers then determines whether positive,0,or -ve
 * description; uses srand and if
 * return: return 0 if successful
 */
int main(void)
{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
						printf(n, "%n is positive");
					else if (n == 0)
						printf(n, "%n is zero");
					else
						printf(n, "%n is negative");

		return (0);

}
