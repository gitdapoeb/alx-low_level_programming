#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("The size of char is: %li byte(s)\n", sizeof(char));
	printf("The size of int is: %li byte(s)\n", sizeof(int));
	printf("The size of long is: %li byte(s)\n", sizeof(long));
	printf("The size of long long int is: %li byte(s)\n", sizeof(long long));
	printf("The size of float is: %li byte(s)\n", sizeof(float));
	printf("The size of double is: %li byte(s)\n", sizeof(double));
	return (0);
}
