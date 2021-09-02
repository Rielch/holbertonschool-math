#include "holberton.h"

/**
 * addition - Adds two complex numbers
 *
 * @c1: First complex
 * @c2: Second complex
 * @c3: Place to store the result
 * Return: Void
 */

void addition(complex c1, complex c2, complex *c3)
{
  c3->re = c1.re + c2.re;
  c3->im = c1.im + c2.im;
}
