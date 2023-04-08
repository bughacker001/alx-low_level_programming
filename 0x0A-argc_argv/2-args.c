#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all arguments it receives.
 * @argc: size of argv array and number of command line
 * @argv: An array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b;
	for (b = 0; b < argc; b++)
	{
	printf("%s\n", argv[b]);
	}
	return (0);
}
