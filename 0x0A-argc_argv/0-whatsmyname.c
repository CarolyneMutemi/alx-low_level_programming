#include <stdio.h>

/**
 * main - main function with arguments argc and *argv -
 * program that prints its name, followed by a new line.
 * @argc: number of words (arguments)
 * entered in the line where the program is called.
 * @argv: pointers to each string formed
 * by entering the words (arguments).
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);

return (0);
}
