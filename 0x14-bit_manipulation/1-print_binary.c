#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to print the binary representation of.
 * Return: nothing.
*/

void print_binary(unsigned long int n)
{
unsigned long int x = n;
int count = 0;
char str[33];

if (n == 0)
{
_putchar('0');
}

while (x > 0)
{
x = n >> 1;
if ((x * 2) == n)
{
str[count] = '0';
}
else
{
str[count] = '1';
}
n = x;
count++;
}
count--;
while (count >= 0)
{
_putchar(str[count]);
count--;
}
}