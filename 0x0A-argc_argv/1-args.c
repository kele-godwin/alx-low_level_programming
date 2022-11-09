#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Then the number of arguments that is supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
