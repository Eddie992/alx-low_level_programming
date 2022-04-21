#include "main.h"

/**
 *swap_int-switches the values of two variables on each other
 *
 *return zero
 */
void swap_int(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
