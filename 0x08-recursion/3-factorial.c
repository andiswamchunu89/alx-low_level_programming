#include "main.h"

/**
  * factorial - function parameter
  *
  * @n: A function parameter
  *
  * Return: Function n
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
