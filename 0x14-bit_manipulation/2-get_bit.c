/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the decimal that we are checking.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x = n;
unsigned int count = 0;
char str[33];

if (n == 0)
{
str[count] = 0;
}

while (x > 0)
{
x = x >> 1;
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

while (count < 33)
{
str[count] = '0';
count++;
}

if (index >= 33)
{
return (-1);
}

return (str[index] - '0');
}
