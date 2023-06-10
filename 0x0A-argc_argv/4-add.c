#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/*
 * A program that adds positive numbers.
 * Print the result, followed by a new line.
 * If no number is passed to the program,
 * print 0, followed by a new line.
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1.
 * You can assume that numbers and the addition
 * of all the numbers can be stored in an int.
 */

int main(int argc, char *argv[])
{
int index, sum = 0;
if (argc == 1)
printf("0\n");
else
{
for (index = 1; index < argc; index++)
{
if (isdigit(*argv[index]) == 0)
{
printf("Error\n");
return (1);
}

sum += atoi(argv[index]);
}
printf("%d\n", sum);
}

return (0);
}
