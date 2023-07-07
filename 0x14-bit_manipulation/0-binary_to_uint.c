/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int x = 0;
int y = 0;

if (!b)
{
return (0);
}

while (b[x])
{
if (b[x] != '0' && b[x] != '1')
{
return (0);
}
x++;
}

x -= 1;
while (x >= 0)
{
num += ((b[x] - '0') << y);
x--;
y++;
}

return (num);
}
