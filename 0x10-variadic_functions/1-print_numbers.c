#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: string to separate numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n-1))
		{
		 printf("%d", va_arg(ap, int));
		 break;
		}
			printf("%d%s ", va_arg(ap, int), separator);
	}
	printf("\n");
	va_end(ap);
}
