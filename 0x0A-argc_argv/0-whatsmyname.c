#include <stdio.h>

/**
 * main - print its name
 * @argc: arg parameter
 * @rgv: array of command line
 * Return 0
 */

int main(int argc __attribute__((unused)), char *argv[])   
{
	printf("%s\n ", *argv);
	return (0);
}
