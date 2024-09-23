#include "main.h"
#include <unistd.h>
#include <limits.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
    return (n < 0 ? -n : n);
}

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

void _puts(char *s)
{
    while (*s)
        write(1, s++, 1);
    write(1, "\n", 1);
}

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int _atoi(char *s)
{
    int result = 0, sign = 1, i = 0;
    while (s[i] == ' ') i++;
    if (s[i] == '-' || s[i] == '+')
        sign = (s[i++] == '-') ? -1 : 1;
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
            return (sign == 1) ? INT_MAX : INT_MIN;
        result = result * 10 + (s[i++] - '0');
    }
    return sign * result;
}

char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;
    while (dest[i]) i++;
    while (src[j])
        dest[i++] = src[j++];
    dest[i] = '\0';
    return dest;
}

char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;
    while (dest[i]) i++;
    while (src[j] && j < n)
        dest[i++] = src[j++];
    dest[i] = '\0';
    return dest;
}

char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
        dest[i++] = '\0';
    return dest;
}

int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
        s[i] = b;
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
        dest[i] = src[i];
    return dest;
}

char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    return (*s == c) ? s : NULL;
}

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;
    char *a;

    while (*s)
    {
        found = 0;
        for (a = accept; *a; a++)
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
        }
        if (!found)
            return count;
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept)
{
    char *a;
    while (*s)
    {
        for (a = accept; *a; a++)
        {
            if (*s == *a)
                return s;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle)
{
    char *h, *n;
    while (*haystack)
    {
        h = haystack;
        n = needle;
        while (*n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return haystack;
        haystack++;
    }
    return NULL;
}
