# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int TypeInt;
char TypeChar;
long int TypeLongInt;
long long int TypeLongLongInt;
float TypeFloat;
printf("Size of a char: %lu byte(s)\n", sizeof(TypeChar));
printf("Size of an int: %lu byte(s)\n", sizeof(TypeInt));
printf("Size of a long int: %lu byte(s)\n", sizeof(TypeLongInt));
printf("Size of a long long int: %lu byte(s)\n", sizeof(TypeLongLongInt));
printf("Size of a float: %lu byte(s)\n", sizeof(TypeFloat));
return (0);
}
