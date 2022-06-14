#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
    char dest[] = "Hello ";
    char src[] = "World!";
    strcat(dest,src);
    _putchar("%s\n", dest);
    return 0;
}
