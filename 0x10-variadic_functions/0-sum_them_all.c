#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summ all the
 * varible in an argment
 * @n: param n
 *
 * Return: 0 or 1
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	sum = 0;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	return (sum);
}
