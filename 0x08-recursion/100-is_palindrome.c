#include "main.h"

/**
 * is_palindrome - checks if a given string is a palindrome.
 * @s: string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, is_palindrome_strlen(s) - 1));
}

/**
 * is_palindrome_strlen - returns the length of a string.
 * @s: string to check.
 *
 * Return: length of the string
 */
int is_palindrome_strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
		len += is_palindrome_strlen(s + 1) + 1;

	return (len);
}

/**
 * is_palindrome_helper - checks if a given substring is a palindrom.
 * @s: string to check.
 * @left: index of the leftmost character of the substring.
 * @right: index of the rightmost character of the substring.
 *
 * Return: 1 if the substring is a palindrome and 0 if not.
 */
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	else if (s[left] == s[right])
		return (is_palindrome_helper(s, left + 1, right - 1));
	else
		return (0);
}
