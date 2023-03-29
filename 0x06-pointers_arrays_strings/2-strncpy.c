#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	while (dest[0] < n)
	{
		if(src[j] == (n-1))
		{
		 dest[i] = '\0';
		}
		else
		{
		dest[i] = src[j];
		
		
		}
		i++;
		j++;
	}
	return (dest);
}
