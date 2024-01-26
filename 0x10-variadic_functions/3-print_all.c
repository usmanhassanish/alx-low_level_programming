#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints with format specifier
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
    int argumentCount = 0, i = 0;
    va_list ap;

    while (format[argumentCount] != '\0')
    {
        argumentCount++;
    }
    va_start(ap, format);
    while (i < argumentCount)
    {
        switch (format[i]) {
        case 'c':
            (i == (argumentCount - 1)) ? printf("%c\n", va_arg(ap, int)) : printf("%c, ", va_arg(ap, int));
            break;
        case 'i':
            (i == (argumentCount - 1)) ? printf("%i\n", va_arg(ap, int)) : printf("%i, ", va_arg(ap, int));
            break;
        case 'f':
            (i == (argumentCount - 1)) ? printf("%f\n", va_arg(ap, double)) : printf("%f, ", va_arg(ap, double));
            break;
        case 's':
            (i == (argumentCount - 1)) ? printf("%s\n", va_arg(ap, char *)) : printf("%s, ", va_arg(ap, char *));
            break;
        default:
            break;
    }
        i++;
    }
    va_end(ap);
}
