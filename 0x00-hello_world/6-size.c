#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char is: %lu byte(s)\n", sizeof(char));
	printf("Size of int is: %lu byte(s)\n", sizeof(int));
	printf("Size of long is: %lu byte(s)\n", sizeof(long));
	printf("Size of long long int is: %lu byte(s)\n", sizeof(long long));
	printf("Size of float is: %lu byte(s)\n", sizeof(float));
	printf("Size of double is: %lu byte(s)\n", sizeof(double));
	return (0);
}
