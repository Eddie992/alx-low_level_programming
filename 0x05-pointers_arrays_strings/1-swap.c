#include "main.h"
/**
 *swap_int-switches the values of two variables on each other
 * @a: an integer to swap with b
 * @b: integer to swap with a
 *return zero
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
