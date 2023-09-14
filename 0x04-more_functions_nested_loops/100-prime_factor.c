#include <stdio.h>
#include <math.h>

/**
 * main - program that distinguishes primes from composites
 * Return: primes and factors of primes
 */

int main(void)
{
long long num = 612852475143;
long long largestPrime = -1;

while (num % 2 == 0)
{
largestPrime = 2;
number /= 2;
}
long long i;
for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largestPrime = i;
num /= i;
}
}
if (num > 2)
{
largestPrime = num;
}
printf('%lld\n', largestPrime);
return (0);
}
