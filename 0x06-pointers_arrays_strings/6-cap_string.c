#include "main.h"
/**
* cap_string - Capitalizes all words of a string
* @str: The string to modify
* Return: A pointer to the modified string
*/
char *cap_string(char *str)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
for (j = 0; separators[j] != '\0'; j++)
{
if (separators[j] == str[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
}
return (str);
}
