#include "main.h"
/**
 * _memset - function that fills n bytes of memory
 * @s: pointer to the memory area to be filled
 * @b: the byte value to be filled
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area s
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
