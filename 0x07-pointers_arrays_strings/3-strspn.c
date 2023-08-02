#include "main.h"
/**
 * _strspn- a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * return: Alwys 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
for (char *p = s; *p; p++)
{
for (char *q = accept; *q; q++)
{
if (*p == *q)
{
count++;
break;
}
}
}
return count;
}

