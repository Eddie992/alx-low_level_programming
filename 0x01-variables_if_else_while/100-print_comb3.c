#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: 0
 */

int main(void)
{
	int tens = '0';
	int ones = '1';

	while (tens <= '8')
	{
		while (ones <= '9')
		{
			putchar(tens);
			putchar(ones);
			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		tens++;
		ones = tens + '1';
	}
	putchar('\n');

	return (0);
}
