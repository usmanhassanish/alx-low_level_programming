#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print numbers
 * @separator: separates strings
 * @n: number os arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%s", va_arg(ap, char *));
				break;
			}
			printf("%s", va_arg(ap, char *));
		}
	}
	else
	{
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
		printf("%s", va_arg(ap, char *));
		break;
		}
			printf("%s%s", va_arg(ap, char *), separator);
	}
	}
	printf("\n");
	va_end(ap);
}
