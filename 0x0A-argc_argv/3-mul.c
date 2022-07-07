#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function that multiply two numbers
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int res, no1, no2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	res = no1 * no2;
	printf("%d\n", res);
	return (0);
}
