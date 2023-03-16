#include <stdio.h>
/**
*main - Entry point
*Description: 'the program's description'
*Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu byte\n", sizeof(long long int));
	printf("Size of float: %zu byte\n", sizeof(float));
	return (0);
}
