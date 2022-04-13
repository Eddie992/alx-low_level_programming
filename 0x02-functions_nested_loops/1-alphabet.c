#include <stdio.h>
/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return(0);
}
