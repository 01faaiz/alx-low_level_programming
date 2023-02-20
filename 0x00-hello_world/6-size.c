#include <stdio.h>
/**
 * main - print out sizes of data type in C
 * code by faaiz
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of b int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of c long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of d long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of f float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
