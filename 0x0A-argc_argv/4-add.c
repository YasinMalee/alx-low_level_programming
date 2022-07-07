#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int res = 0, no, ch, n, w;

	for (ch = 1; ch < argc; ch++)
	{
		for (n = 0; argv[ch][n] != '\0'; n++)
		{
			if (argv[ch][n] > '9' || argv[ch][n] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (w = 1; w < argc; w++)
	{
		no = atoi(argv[w]);
		res += no;
	}
	printf("%d\n", res);
	return (0);
}
