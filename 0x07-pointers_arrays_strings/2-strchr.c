#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @c:the caracter to be searched for
 * @s: a pointer to the string to be searched
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
