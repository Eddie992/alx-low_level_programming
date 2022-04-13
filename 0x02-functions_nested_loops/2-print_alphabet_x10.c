#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		_putchar('\n');
	}
}
