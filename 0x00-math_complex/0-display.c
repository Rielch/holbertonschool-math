#include "holberton.h"

/**
 * display_complex_number - Prints the representation of a complex number
 *
 * @c: complex number
 * Return: Void
 */

void display_complex_number(complex c)
{
  printf("%d", c.re);
  if (c.im)
    {
      if (c.im > 0)
	{
	  printf(" + ");
	}
      else
	{
	  printf(" - ");
	}
      if (c.im != 1 && c.im != -1)
	{
	  c.im *= -1;
	  printf("%d", c.im);
	}
      printf("i");
    }
  printf("\n");
}
