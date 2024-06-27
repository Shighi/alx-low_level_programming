#include <stdio.h>
#include <math.h>
/**
* largest_prime_factor - finds the largest prime factor of a number
* @n: the number to find the largest prime factor of
*
* Return: the largest prime factor
*/
long largest_prime_factor(long n)
{
long i;
while (n % 2 == 0)
n = n / 2;
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
n = n / i;
}
}
if (n > 2)
return (n);
return (i - 2);
}
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
printf("%ld\n", largest_prime_factor(612852475143));
return (0);
}
