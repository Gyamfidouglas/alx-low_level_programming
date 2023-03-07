#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: pointer to the starting address of the memory to be filled
 * @b: the desired value to fill the memory with
 * @n: number of bytes to be filled with the value
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

        return (s);
}
