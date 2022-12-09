#include <stdio.h>
/**
 * main -print out size of data types in c
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %i byte(S)\n", sizeof(a));
	printf("size of an int: %i byte(S)\n", sizeof(b));
	printf("size of a long int: %i byte(S)\n", sizeof(c));
	printf("size of a long long int: %i byte(S)\n", sizeof(d));
	printf("size of a float: %i byte(S)\n", sizeof(f));
	return (0);
}
