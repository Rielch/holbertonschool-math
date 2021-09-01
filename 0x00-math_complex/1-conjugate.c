#include "holberton.h"

/**
 * conjugate - Returns the conjugate of an imaginary number
 *
 * @c: Complex number
 * Return: Conjugate of c
 */

complex conjugate(complex c)
{
  c.im *= -1;
  return(c);
}
