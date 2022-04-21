#include "main.h"
#include <stdio.h>
/**
 * _puts - puts a string followed by a newline to standard output
 *
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
putchar(str[i]);
putchar('\n');
}
