#include <stdio.h>

/**
 * main - Function to print its own name
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
