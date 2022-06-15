#include "main.h"
#include <string.h>

/**
* puts2 -> puts2 function
* @str: str parameter
*/
void puts2(char *str)
{
	int len, ch;

	len = strlen(str);
	for (ch = 0; ch < len; ch += 2)
		_putchar (str[ch]);
	_putchar ('\n');
}
