# include <stdio.h>

int main(void)
{
	int TypeInt;
	char TypeChar;
	long int TypeLongInt;
	long long int TypeLongLongInt;
	float TypeFloat;

	printf("Size of char : %zu byte(s).\n",sizeof(TypeChar));
	printf("Size of an int : %zu byte(s).\n", sizeof(TypeInt));
	printf("Size of a long int : %zu byte(s).\n", sizeof(TypeLongInt));
	printf("Size of a long long int : %zu byte(s).\n", sizeof(TypeLongLongInt));
	printf("Size of float : %zu byte(s).\n", sizeof(TypeFloat));

	return 0;

}
