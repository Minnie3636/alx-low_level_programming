#include "main.h"

/**
 * _Isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _Isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
