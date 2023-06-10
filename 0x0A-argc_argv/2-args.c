#include <stdio.h>

/*
 * A program that prints all arguments it receives.
 * All arguments should be printed, including the first one.
 * Only print one argument per line, ending with a new line.
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
