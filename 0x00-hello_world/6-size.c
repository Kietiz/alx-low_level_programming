#include <stdio.h>

/**
 * main - prints the size of various data types
 * Description: Program prints the different sizes of data types
 * Return: int 0 upon sucessful run
 */
int main(void)
{
	char char_size;
	int int_size;
	long int long_int_size;
	long long int long_long_int_size;
	float float_size;

	printf("size of char: %zu bytes\n", sizeof(char_size));
	printf("Size of int: %zu bytes\n", sizeof(int_size));
	printf("Size of long int: %zu bytes\n", sizeof(long_int_size));
	printf("Size of long long int: %zu bytes\n", sizeof(long_long_int_size));
	printf("Size of float: %zu bytes\n", sizeof(float_size));

	return (0);
}
