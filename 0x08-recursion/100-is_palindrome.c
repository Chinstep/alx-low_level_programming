#include "main.h"
/**
 * palindromeChecker - checks the strings
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, start at 0
 * Return: 1 if it's a palindrome, 0 if it's not
 */
int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[1] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the sting to check the length of
 * Return: an integer that display the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - checks to see if a string is palindrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 2 if it's not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
