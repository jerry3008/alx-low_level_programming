#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 **/
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
	{
		putchar(le);
	}
		putchar('\n');

	return (0);
}
