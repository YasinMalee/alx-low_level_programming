#include <unistdio.h>
#include <main.h>

/**
 * main: Entry point
 * Description: prints _putchar, followed by a new line
 * Return: 0(succes)
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
