#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int fib[50];

    fib[0] = 1; /* First Fibonacci number */
    fib[1] = 2; /* Second Fibonacci number */

    /* Calculate Fibonacci numbers */
    for (i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    /* Print the first 50 Fibonacci numbers */
    for (i = 0; i < 50; i++)
    {
        if (i == 49)
        {
            printf("%d\n", fib[i]);
        }
        else
        {
            printf("%d, ", fib[i]);
        }
    }

    return (0);
}
