#include "main.h"
/**
 * cap_string - capitalize every word
 * @s: argument
 * Return: returns s
 */
char *cap_string(char *s)
{
	int i; 

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			int k = i + 1;

			if (s[k] >= 'a' && s[k] <= 'z')
			{
				s[k] = s[k] - 32;
			
			}
			else
			{
			
			}
		}
		else
		{
		
		}
	}
	return (s);
}
