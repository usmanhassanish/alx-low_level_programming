#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with comma
 * @separator: separator
 * @n: amount of number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(ap, int));
			break;
		}
		else if (separator == NULL)
		{
			printf("%d ", va_arg(ap, int));
		}
		else
		{
			printf("%d%s ", va_arg(ap, int), separator);
		}
	}
	va_end(ap);
}
