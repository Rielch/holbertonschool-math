#include "holberton.h"

/**
 * argument - Returns the argument of a complex number
 *
 * @c: Complex number
 * Return: Argument of the complex number
 */

double argument(complex c)
{
  double arg;

  arg = atan2(c.im, c.re);
  return(arg);
}
