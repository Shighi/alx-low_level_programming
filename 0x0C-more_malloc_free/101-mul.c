#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a string consists of only digits
 * @s: string to check
 * Return: 1 if only digits, 0 otherwise
 */
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}

/**
 * _print_error - prints "Error" and exits with 98
 */
void _print_error(void)
{
char *error = "Error\n";
int i;

for (i = 0; error[i]; i++)
_putchar(error[i]);
exit(98);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 */
void mul(char *num1, char *num2)
{
int len1, len2, len, i, j, n1, n2, sum, *result;

len1 = _strlen(num1);
len2 = _strlen(num2);
len = len1 + len2;
result = calloc(len, sizeof(int));
if (!result)
_print_error();

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
sum = 0;
for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum += result[i + j + 1] + (n1 *n2);
result[i + j + 1] = sum % 10;
sum /= 10;
}
if (sum)
result[i + j + 1] += sum;
}

i = 0;
while (i < len - 1 && result[i] == 0)
i++;
for (; i < len; i++)
_putchar(result[i] + '0');
_putchar('\n');

free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
_print_error();

mul(argv[1], argv[2]);
return (0);
}
