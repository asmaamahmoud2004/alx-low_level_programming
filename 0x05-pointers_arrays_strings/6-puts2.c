#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character.
 *
 * @str: A pointer to a string to be printed.
 *
 * Return: None.
 */
void puts2(char *str)
{
    int length = 0;
    int i;

    while (*str != '\0')
    {
        str++;
        length++;
    }
    str = str - length;
    for (i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            _putchar(str[i]);
        }
    }

    _putchar('\n');
}
