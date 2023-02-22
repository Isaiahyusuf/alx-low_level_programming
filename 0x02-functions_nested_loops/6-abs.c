#include "main.h"
/**
 * _abs - computes the absolute value of integer
 * @c: the numner to be computed
 * Return: Absolite value of numberof zero
 */
int _obs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
