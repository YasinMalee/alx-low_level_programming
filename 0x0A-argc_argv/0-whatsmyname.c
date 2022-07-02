#include <stdio.h>

/**
 * main -> this is a Function to print its name
 * @argc: argc parameter
 * @asrgv: array of a command listed
 * Return 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
