#include <stdio.h>

/**
 * main - main function with arguments argc and *argv -
 * program that prints all arguments it receives.
 * @argc: number of words (arguments)
 * entered in the line where the program is called.
 * @argv: pointers to each string formed
 * by entering the words (arguments).
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
int index;
for (index = 0; index < argc; index++)
{
printf("%s\n", argv[index]);
}

return (0);
}
