#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * Return: 0
 */
int main(void)
{
	char la;
	int num;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');


	for (la = 'a'; la < 'g'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}

