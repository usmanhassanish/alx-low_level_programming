#include "main.h"

int isPalindromeHelper(char *str, int start, int end);
int strLength(char *str);
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string parameter
 * Return: return 1 or 0
 */
int is_palindrome(char *s);
{
	int len = strLength(s);

	return (isPalindromeHelper(s, 0, len - 1));
}
/**
 * isPalindromeHelper - check palindrome
 * @str: string argument
 * @start: string argument
 * @end: string argument
 * Return: return 1 or 0
 */
int isPalindromeHelper(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (str[start] != str[end])
	{
		return (0);
	}
	return (isPalindromeHelper(str, start + 1, end - 1));
}
/**
 * strLength - get length
 * @str: argument
 * Return: return 0 or 1
 */
int strLength(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + strLength(str + 1));
}
