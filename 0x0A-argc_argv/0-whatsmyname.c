#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * argc: Number of arguments
 * argv: Array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
