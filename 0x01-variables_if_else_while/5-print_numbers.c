#include <stdio.h>

/**
 *main - prints single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");

	return (0);
}
