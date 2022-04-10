# include <stdio.h>

int main(void)
{
	int TypeInt;
	char TypeChar;
	long int TypeLongInt;
	long long int TypeLongLongInt;
	float TypeFloat;

	printf("Size of char : %lu byte(s).\n", (unsigned long)sizeof(TypeChar));
	printf("Size of an int : %lu byte(s).\n", (unsigned long)sizeof(TypeInt));
	printf("Size of a long int :l%zu byte(s).\n", (unsigned long)sizeof(TypeLongInt));
	printf("Size of a long long int : %lu byte(s).\n", (unsigned long)sizeof(TypeLongLongInt));
	printf("Size of float : %lu byte(s).\n", (unsigned long)sizeof(TypeFloat));

	return (0);

}
