#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int nCasted = (int) n;

	while (s[i] < nCasted)

	{
		s[i] = b;
		i++;
	}
	return (s);
}
