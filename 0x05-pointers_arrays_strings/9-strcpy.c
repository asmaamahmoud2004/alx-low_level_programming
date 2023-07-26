#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 *
 * @dest: A pointer to a buffer where the string is to be copied.
 * @src: A pointer to the string to be copied.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
    int length = 0;
    int i = 0;

    while (*(src + length) != '\0')
    {
        length++;
    }

    for (; i < length; i++)
    {
        dest[i] = src[i];
    }

    dest[length] = '\0';

    return (dest);
}
