#include "main.h"
/**
 * print_rev - imrime en reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (0 = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
