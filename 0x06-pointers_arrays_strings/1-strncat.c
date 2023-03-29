#include "main.h"
/**
 * _strncat - concatenate spring based on size inputed
 * @dest: argument 1
 * @src: argument 2
 * @n: argument 3
 * Return: returns dest(concatenated)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

        while (dest[i] != '\0')
                i++;
	while (src[k] != '\0')
                k++;
	if(n < k)
	{
		while (src[j] != src[n])
		{
		 dest[i] = src[j];
                j++;
                i++;
		}
	}
	else
	{
        	while (src[j] != '\0')
        	{

                dest[i] = src[j];
                j++;
                i++;
        	}
	}
                dest[i] = '\0';
                return (dest);	
}
