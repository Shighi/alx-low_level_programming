#include <stdio.h>

/**
 * main - prints the lowercase alphabet
 *
 * Description: This program prints all lowercase letters
 * of the alphabet from 'a' to 'z', followed by a newline.
 * It uses a while loop and the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
