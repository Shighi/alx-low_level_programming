#include <stdio.h>
/**
* main - Prints numbers of base 16 (hexadecimal)
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
putchar(c);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
