#include "holberton.h"

/**
 * multiplication - Multiplicates two complex numbers
 *
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Where to store the result
 * Return: Void
 */

void multiplication(complex c1, complex c2, complex *c3)
{
  c3->re = (c1.re * c2.re) + (-1 * c1.im * c2.im);
  c3->im = (c1.im * c2.re) + (c1.re * c2.im);
}
