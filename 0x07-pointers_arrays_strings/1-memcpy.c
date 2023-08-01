#include "main.h"
/**
 * _memcpy - a function that copies  memory area from src to dest
 * @n: the number of bytes to be filled
 * @src: a ponter to the memoty area to be copied from
 * @dest: a pointer to the memory area to be copied to
 * Return: return nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

