#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    int index, sum = 0;
    if (argc == 1) printf("0\n");
    else
    {
    for (index = 1; index < argc; index++)
    {
        if (isdigit(*argv[index]) == 0)
        {
            printf("Error\n");
            return(1);
        }

        sum += atoi(argv[index]);
    }
    printf("%d\n", sum);
    }

    return (0);
}
