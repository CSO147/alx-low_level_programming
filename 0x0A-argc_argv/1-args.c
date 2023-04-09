#include "main.h"
#include <stdio.h>
/**
 * main - functions that prints the number of arguments passed into it.
 * @argc: number of command line of arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
