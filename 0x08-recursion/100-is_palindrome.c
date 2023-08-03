#include "main.h"
/**
 *is_palindrome- checks if a plandrome is emplty and return 1 if not0
 * @s: string to reverse
 * Return: 1  if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
if (s == NULL)
{
return (0);
int i = 0;
int j = strlen(s) - 1;
while (i < j)
{
if (s[i] != s[j])
{
return (0);
}
i++;
j--;
}
return (1);
}
}
