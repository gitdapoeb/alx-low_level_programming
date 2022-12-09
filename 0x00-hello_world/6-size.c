#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int n;
	float f;

	printf("Size of char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long int is: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
