#include <stdio.h>
/*
 * A program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * Path before the name of the program will stay.
 */

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);

return (0);
}
