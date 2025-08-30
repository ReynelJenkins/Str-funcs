//todo: puts, strchr, strlen, strcpy, strncpy, strcat, strncat, fgets, strdup, getline

#include <stdio.h>

int my_puts(const char *str);

int main()
{
    my_puts("Hello World!\n");
    return 0;
}

int my_puts(const char *str)
{
    const char *i = str;
    while (*i != EOF && *i != '\n' && *i != '\0')
    {
        putchar(*i);
        i++;
    }
}
