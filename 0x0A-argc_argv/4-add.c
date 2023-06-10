#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - main function with arguments argc and *argv -
 * program that adds positive numbers.
 * @argc: number of words (arguments)
 * entered in the line where the program is called.
 * @argv: pointers to each string formed
 * by entering the words (arguments).
 * Return: 1 for error or 0 (Success).
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
