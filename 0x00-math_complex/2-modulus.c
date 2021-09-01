#include "holberton.h"

/**
 * modulus - Calculates the modulus of an imaginary number
 *
 * @c: Complex number
 * Return: Modulus of the complex
 */

double modulus(complex c)
{
  double mod, p = 2, re = c.re, im = c.im;

  mod = sqrt(pow(re, p) + pow(im, p));
  return(mod);
}
