#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lower or uppercase
 * @c: unsigned int vaule to be compared with ASCII vaule
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return(1);
	else
		return (0);
}
