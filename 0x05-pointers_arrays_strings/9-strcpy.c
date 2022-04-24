#include "main.h"
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	int index;
	int len = strlen(src);

	for (index = 0; index <= len; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
