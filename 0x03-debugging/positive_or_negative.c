#include "main.h"
/**
 * positive_or_negative - check if a number is positive, negative or zero
 * @i: is the numer to be cheked
 * Return: Always 0
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
