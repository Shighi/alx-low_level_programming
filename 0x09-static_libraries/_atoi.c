#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
int result = 0, sign = 1, i = 0;
while (s[i] == ' ')
i++;
if (s[i] == '-' || s[i] == '+')
sign = (s[i++] == '-') ? -1 : 1;
while (s[i] >= '0' && s[i] <= '9')
result = result * 10 + (s[i++] - '0');
return (sign * result);
}
