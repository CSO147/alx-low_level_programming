#include "main.h"
#include <stdio.h>
/**
 * main - functions that prints all arguments it receives.
 * @argc: number of the command line arguments.
 * @argv: array functions that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
