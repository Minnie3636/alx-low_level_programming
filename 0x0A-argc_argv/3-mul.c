#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of command line arg...
 * @argv: the array that  contains the command line arg...
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * argv[2]);
	return (0);
}
