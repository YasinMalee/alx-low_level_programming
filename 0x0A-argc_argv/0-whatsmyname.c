#include <stdio.h>

/**
 * main - print its own name
 * @argc: argc parameter
 * @rgv: array of a command listed
 * Return 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])   
{
	printf("%s\n", *argv);
	return (0);
}
