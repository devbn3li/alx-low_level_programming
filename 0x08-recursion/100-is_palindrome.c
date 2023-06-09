#include "main.h"
/**
 * palindromeChecker - check the string
 * @str: string to be checked
 * @len: length of the string
 * @i: the incrementor, start at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
 * _recursion - return the length of a string
 * @s: string to check the length of
 * Return: integer that displays the length of the string
 */
int _recursion(char *s)
{
	if (*s != '\0')
		return (1 + _recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - check to see if a string is a palindrome
 * @s: string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
