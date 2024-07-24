#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String to search in
 * @needle: Substring to look for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == 0)
return (haystack);

for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (haystack + i);
}
}

return (NULL);
}
