/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the integer being manipulated.
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = *n;
unsigned long int y = *n;
unsigned int count = 0;
int a = 0;
int b = 0;
unsigned long int num = 0;
char str[33];

if (index >= 33)
{
return (-1);
}

if (x == 0)
{
str[count] = 0;
}

while (x > 0)
{
x = x >> 1;
if ((x * 2) == y)
{
str[count] = '0';
}
else
{
str[count] = '1';
}
y = x;
count++;
}

while (count < 33)
{
    str[count] = '0';
    count++;
}

str[index] = '1';

while (str[a])
{
a++;
}

a -= 1;
while (a >= 0)
{
num += ((str[a] - '0') << b);
a--;
b++;
*n = num;
}

return (1);
}